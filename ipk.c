#include<stdio.h>
#include<conio.h>

void main(){
	char nm[50];
	char npm[8];
	char kls[5];
	float ipk;
	
	printf("\n+++++++++ BIODATA DAN IPK +++++++++\n");
	printf("Masukkan Nama  : ");
	scanf("%s",&nm);
	printf("Masukkan NPM   : ");
	scanf("%s",&npm);
	printf("Masukkan Kelas : ");
	scanf("%s",&kls);
	printf("Masukkan IPK   : ");
	scanf("%f",&ipk);
	printf("+++++++++++++++++++++++++++++++++++");
	
	if (ipk>=3.5){
		printf("\n\n SELAMAT :) \n");
	}
	else{
		printf("\n\n MAAF :( \n");
	}
}
