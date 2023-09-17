#include<stdio.h>
#include<conio.h>

int main(){
	int a,b,c;
	char nama[10];

	printf("Masukkan nama anda : ");
	scanf("%s", &nama);
	printf("\nHello, %s \n", nama);
	printf("\nPROGRAM PERHITUNGAN\n");
	printf("\nMasukkan Angka Pertama : ");
	scanf("%i", &a);
	printf("Masukkan Angka Kedua : ");
	scanf("%i", &b);
	c = a+b;
	printf("\nHasilnya adalah %i", c);
	getch();
return 0;
}
