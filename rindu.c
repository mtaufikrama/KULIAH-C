#include<stdio.h>

int main(){
	int berat, total;
	char no[8];
	char alamat[15];
	int adm = 1000;
	int perkilo = 5000;
	
	printf("\nMasukkan Nomor Paket        : ");
	scanf("%s", &no);
	printf("Masukkan Berat Paket        : ");
	scanf("%i", &berat);
		if(berat>40){
		total = adm + ((perkilo + 4000) * berat);
	}
	else if(berat>20){
		total = adm + ((perkilo + 2000) * berat);
	}
	else if(berat>=2){
		total = adm + (perkilo * berat);
	}
	else{
		printf("\nMaaf, orderan minimal 2 kilogram");
		return 0;
	}
	printf("Masukkan Tujuan Paket(Kota) : ");
	scanf("%s", &alamat);

	printf("\n======== PT RINDU ORDER ========\n");
	printf("\nNomor Paket     : %s\n", no);
	printf("Berat Paket     : %i\n", berat);
	printf("Tujuan Paket    : %s\n", alamat);
	printf("Total           : Rp %i\n", total);
	getch();
return 0;
}
