#include <stdio.h>
#include <conio.h>

void main()
{
	struct
	{
		char npm[50];
		char nama[50];
		char kelas[50];
		int cobol, c, total;
	} 
	pmhs[10];
	char npm[50];
	char nama[50];
	char kelas[50];
	int cobol, c, total;
	int i;
	
	printf("=================================\n");
	printf("     PROGRAM DATA MAHASISWA\n");
	printf("=================================\n\n");
	{
		printf("Masukkan NPM            : ");
		scanf("%s",&pmhs[i].npm);
		printf("Massukkan Nama          : ");
		scanf("%s",&pmhs[i].nama);
		printf("Masukkan Kelas          : ");
		scanf("%s",&pmhs[i].kelas);
		printf("Masukkan Nilai COBOL    : ");
		scanf("%d",&pmhs[i].cobol);
		printf("Masukkan Nilai C        : ");
		scanf("%d",&pmhs[i].c);
		pmhs[i].total=(pmhs[i].cobol + pmhs[i].c)/2;
		printf("\n\n");
	}
	printf("===== Output Data Mahasiswa =====\n\n");
	printf("NPM     : %s\n",pmhs[i].npm);
	printf("Nama    : %s\n",pmhs[i].nama);
	printf("Kelas   : %s\n",pmhs[i].kelas);
	printf("Nilai Cobol : %d\n",pmhs[i].cobol);
	printf("Nilai C     : %d\n",pmhs[i].c);
	printf("Total   : %d\n",pmhs[i].total);
	
	printf("=================================");
}
