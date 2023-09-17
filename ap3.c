#include <stdio.h>
#include <string.h>

int main(){
	char st[30];
	char nama[30];
	char npm[30];
	
	printf("Masukkan Nama Anda : ");
	scanf("%s", &nama);
	printf("Masukkan NPM Anda  : ");
	scanf("%s", &npm);
	printf("\n");
	
	strcpy(st, ("&s", nama));
	printf("\"%s\" berisi %d karakter\n", st, strlen(st));
	strcpy(st, ("&s", npm));
	printf("\"%s\" berisi %d karakter\n", st, strlen(st));
	
	return 0;
}
