#include <stdio.h>
#include <stdlib.h>

// �r�n�n struct �
struct Product {
    char name[50];
    double starting_price;
    double current_bid;
};

// Kullan�c� struct �
struct User {
    int id;
    double bid_amount;
};

// �r�n bilgilerini giri�ten alacak fonksiyon
void getProductDetails(struct Product *product) {
    printf("Urun Adi: ");
    scanf("%s", product->name);

    printf("Baslangic Fiyati: ");
    scanf("%lf", &product->starting_price);

    // ilk teklif ba�lang�� fiyat� olmal�
    product->current_bid = product->starting_price;
}

// a��k art�rma fonksiyonu
void auction(struct Product *product, struct User *users, int user_count) {
    printf("****Acik Artirma Baslatildi!****\n");
    printf("Urunun Adi: %s\n", product->name);
    printf("Baslangic Fiyati: %.2f\n", product->starting_price);

    // Kazanan kullan�c�n�n ID'sini ve �denecek miktar� tutacak de�i�kenler
    int winning_user_id = -1;
    double winning_bid_amount = 0;

    // Teklif alma d�ng�s�
    while (1) {
        double bid;
        printf("Yeni Kullanici ID Giriniz (Cikis icin -1): ");
        int user_id;
        scanf("%d", &user_id);

        // ��k�� kontrol�
        if (user_id == -1) {
            if (winning_user_id != -1) {
                printf("Kazanan Kullanici ID: %d\n", winning_user_id);
                printf("En Yuksek Teklif: %.2f\n", winning_bid_amount);
            } else {
                printf("Acik artirmada kazanan kullanici bulunamadi.\n");
            }
            printf("Acik Artirma Sonlandirildi.\n");
            break;
        }

        // Ge�erli teklif kontrol�
        printf("Kullanici Teklif Miktarini Giriniz: ");
        scanf("%lf", &bid);

        if (bid > product->current_bid) {
            product->current_bid = bid;
            printf("Yeni Teklif: %.2f\n", product->current_bid);

            // Teklif yapan kullan�c�y� belirle
            for (int i = 0; i < user_count; i++) {
                if (users[i].id == user_id) {
                    winning_user_id = user_id;
                    winning_bid_amount = bid;
                    break;
                }
            }
        } else {
            printf("Gecersiz Teklif. Daha Yuksek Bir Teklif Girin.\n");
        }
    }
}

int main() {
    // �r�n olu�turma ve bilgileri alma
    struct Product myProduct;
    getProductDetails(&myProduct);

    // Kullan�c�lar� olu�tur
    printf("Kac kullanici var? ");
    int user_count;
    scanf("%d", &user_count);

    struct User *users = (struct User *)malloc(user_count * sizeof(struct User));

    for (int i = 0; i < user_count; i++) {
        users[i].id = i + 1;
        users[i].bid_amount = 0;
    }

    // A��k art�rmay� ba�lat
    auction(&myProduct, users, user_count);

    // Belle�i serbest b�rak
    free(users);

    return 0;
}

