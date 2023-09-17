#include <stdio.h>
#include <conio.h>

void main()
{
	struct mhs
	{
		char npm[50];
		char nama[50];
		char kelas[50];
		int uts, uas, total;
	} pmhs[10];
	int i, n;
	printf("=================================\n");
	printf("     PROGRAM DATA MAHASISWA\n");
	printf("=================================\n\n");
	{
		printf("Masukkan NPM anda	: ");
		scanf("%s",&pmhs[i].npm);
		printf("Massukkan Nama anda	: ");
		scanf("%s",&pmhs[i].nama);
		printf("Masukkan Kelas anda	: ");
		scanf("%s",&pmhs[i].kelas);
		printf("Masukkan Nilai UTS	: ");
		scanf("%d",&pmhs[i].uts);
		printf("Masukkan Nilai UAS	: ");
		scanf("%d",&pmhs[i].uas);
		pmhs[i].total=(pmhs[i].uts * 0.70) + (pmhs[i].uas * 0.30);
		printf("\n\n");
	}
	printf("===== Output Data Mahasiswa =====\n\n");
	printf("NPM	: %s\n",pmhs[i].npm);
	printf("Nama	: %s\n",pmhs[i].nama);
	printf("Kelas	: %s\n",pmhs[i].kelas);
	printf("UTS	: %d\n",pmhs[i].uts);
	printf("UAS	: %d\n",pmhs[i].uas);
	printf("Total	: %d\n",pmhs[i].total);
	
	printf("=================================");
}
