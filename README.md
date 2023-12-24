Bu basit C programı, bir açık artırma uygulamasını simüle etmektedir. Kullanıcı, bir ürünün adını ve başlangıç fiyatını girebilir, ardından açık artırmayı başlatabilir ve tekliflerde bulunabilir.
C dilinde yazılmış olduğu için öncelikle bir C derleyicisi  kurulu olmalıdır.
Terminal veya komut istemcisinde şu komutu çalıştırarak programı derleyebilirsiniz:gcc -o auction_app auction.c
Derleme işleminden sonra şu komutu kullanarak programı başlatabilirsiniz:./auction_app
Program, ürün adı ve başlangıç fiyatını girmenizi isteyecektir.
Daha sonra açık artırmayı başlatarak tekliflerde bulunabilirsiniz.
örnek kulanım:
Ürün Adı: cep telefonu
Başlangıç Fiyatı: 5000.00

Urun Adi: telefon
Baslangic Fiyati: 2000
Kac kullanici var? 3
****Acik Artirma Baslatildi!****
Urunun Adi: telefon
Baslangic Fiyati: 2000.00
Yeni Kullanici ID Giriniz (Cikis icin -1): 1
Kullanici Teklif Miktarini Giriniz: 2100
Yeni Teklif: 2100.00
Yeni Kullanici ID Giriniz (Cikis icin -1): 2
Kullanici Teklif Miktarini Giriniz: 2200
Yeni Teklif: 2200.00
Yeni Kullanici ID Giriniz (Cikis icin -1): 3
Kullanici Teklif Miktarini Giriniz: 2200
Gecersiz Teklif. Daha Yuksek Bir Teklif Girin.
Yeni Kullanici ID Giriniz (Cikis icin -1): -1
açık artırmayı kazanan:2
en yüksek teklif:2200
açık atrtırma sona ermiştir.

Bu depoyu (repository) fork edin.
Yeni özellik veya düzeltmelerinizi içeren bir dal (branch) oluşturun.
Değişikliklerinizi commit edin: git commit -m 'Yeni özellik eklendi'
Yeni dalınıza (branch) push yapın: git push origin yeni-dal
Bir Pull Request oluşturun.
