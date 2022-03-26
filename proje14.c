#include <stdio.h>
#include <stdlib.h>

int main() {

     //Float degiskenler
     //%f

	float sinav1, sinav2, sinav3, proje, ort;
	
	printf("Birinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&sinav1);

	printf("Ikinci Sinav Notunuzu Giriniz: ");
	scanf("%f",&sinav2);
	
	printf("Ucuncu Sinav Notunuzu Giriniz: ");
	scanf("%f",&sinav3);
	
	printf("Proje Notunuzu Giriniz: ");
	scanf("%f",&proje);
	
	ort=(sinav1+sinav2+sinav3+proje)/4;
	printf("Donem Sonu Ortalamaniz: %f",ort);
	
	return 0;
}
