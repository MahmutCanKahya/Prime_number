#include <stdio.h>
void asal_bul(int start, int last) {

	int count = 0;
	int x = 1;
	int bölünmeSayisi;//EÐER SADECE  2 KERE BÖLÜNÜRSE OZAMAN BU SAYI ASALDIR
	
	for (int i = start; i < last; i++) {
		bölünmeSayisi = 0;
		int j = 0;
		for (j = i; j > 0; j--) {
			if (i % j == 0) {
				bölünmeSayisi++;
			}
		}

		if (bölünmeSayisi == 2) {
			count++;
			printf("%d \n", i);
		}
	}
	printf("Toplam asal sayi %d tanedir.",count);

}
int main() {

	int sayi1, sayi2;
	printf("HANGI SAYIDAN ITIBAREN ARANSIN?");
	scanf_s("%d", &sayi1);
	printf("HANGI SAYIYA KADAR ASAL SAYILAR ARANSIN ?");
	scanf_s("%d", &sayi2);
	asal_bul(sayi1, sayi2);
	int a;
	scanf_s("%d", &a);

}