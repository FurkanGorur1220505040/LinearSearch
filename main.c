#include <stdio.h>
#include <stdlib.h>

int main() {
  int boyut, arananSayi, sonuc=0; //dizi boyutu, dizi icinde aranan sayi
  int i=0;
  printf("Dizi icin boyut giriniz:");  //Kullanýcýdan dizi boyutu girmesi istenir
  scanf("%d",&boyut);
  
  int dizi[boyut];
  
  printf("%d tane eleman giriniz:\n",boyut);  
  
  for(i=0;i<boyut;i++){  //girilecek elemanlar donguye sokulur
  
    scanf("%d",&dizi[i]);
}
  
  printf("Dizi icinde aramak istediginiz sayiyi giriniz: "); //Kullanicidan bir tane sayi girmesi istenir
  scanf("%d", &arananSayi);
  
  for(i=0; i<boyut; i++) {   //Linear Search ile istenilen sayi dizi icinde aranir
    if(dizi[i] == arananSayi) {    //if kosulu kullanarak sayi bulunursa indexi ekrana yazdirilir
      printf("Aranan sayiyinin dizi icindeki indexi: %d\n", i);
      
	  sonuc=1;
      break;
    }
  }
  
  if(sonuc==0) {   //sonuc degismeden bu kosula kadar 0 olarak gelirse ekrana sayi bulunmadi diye yazdirilir
    printf("\nAranan sayi dizi icinde mevcut degil\n");
  }
  
  return 0;
}
