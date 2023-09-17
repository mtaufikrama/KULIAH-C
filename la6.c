#include <stdio.h>
#include <conio.h>

int main() {
	int pilihan,nilai,pass;
	char nama[20];
	char npm[8];
	char kelas[5];
do {
	printf("\n+=====MENU UTAMA=====+");
	printf("\n+====================+");
	printf("\n| 1. Biodata         |");
	printf("\n| 2. Grade           |");
	printf("\n| 3. Password        |");
	printf("\n| 4. Exit            |");
	printf("\n+====================+");
	printf("\nMasukkan pilihan Anda : ");
	scanf("%d",&pilihan);
	printf("+====================+\n");

	switch (pilihan){
 		case 1: 
 			printf("Masukkan Nama Anda : ");
 			scanf("%s", &nama);
 			printf("Masukkan NPM Anda    : ");
 			scanf("%s", &npm);
 			printf("Masukkan Kelas Anda  : ");
 			scanf("%s", &kelas);
 			printf("\nNama Saya    : %s ", nama);
 			printf("\nNPM Saya     : %s ", npm);
 			printf("\nKelas Saya   : %s ", kelas);
 			getch();
 			break;

 		case 2: 
 			printf("\nMasukkan Nilai : ");
 			scanf("%i", &nilai);
 			if(nilai<=40){
 				printf("Grade Anda E");
 			}
 			else if(nilai<=50){
 				printf("Grade Anda D");
 			}
 			else if(nilai<=60){
 				printf("Grade Anda C");
 			}
 			else if(nilai<=70){
 				printf("Grade Anda B");
 			}
 			else if(nilai<=100){
 				printf("Grade Anda A");
 			}
 			getch();
 			break;

		case 3: 
 			printf("\nMasukkan Password : ");
 			scanf("%i", &pass);
 			if(pass == 123){
 				printf("Password Benar");
 			}
 			else {
 				printf("Password Salah");
 			}
 			break;

		case 4: 
			printf("\nTerima kasih sudah mempercayai program ini");
		break;
		default :
			printf("\nTidak ada pilihannya :( ");
		break;
	}
	}while (pilihan<=3);
	return 0;
}
