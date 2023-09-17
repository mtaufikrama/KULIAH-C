#include <stdio.h>

int hitung(int a, int *b){
	*b = 15;
	return a + *b;
}

main(){
	int y,z,hasil;
	y=10;
	z=50;
	printf("Sebelum Jalankan Fungsi\n");
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	hasil = hitung(y,&z);
	printf("Setelah Jalankan Fungsi\n");
	printf("y=%d\n",y);
	printf("z=%d\n",z);
	printf("hasil=%d\n", hasil);
	
	return 0;
}
