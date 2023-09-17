#include <stdio.h>
#include <conio.h>

int main(){
	int hasil[3][4];
	int baris, kolom, matrix[3][4];
	int baris1, kolom1, matrix1[3][4];
	
	printf("Input elemen array pertama : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4;kolom++){
			printf("elemen matrix [%d][%d] = ", baris+1, kolom+1);
			scanf("%d", &matrix[baris][kolom]);
		}
	}
	printf("Input elemen array kedua : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4;kolom++){
			printf("elemen matrix 1 [%d][%d] = ", baris+1, kolom+1);
			scanf("%d", &matrix1[baris][kolom]);
		}
	}
	printf("\nIsi array pertama : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4; kolom++){
			printf("%d", matrix[baris][kolom]);
			printf("\n");
		}
	}
	printf("\n");
	printf("\nIsi array kedua : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4; kolom++){
			printf("%d", matrix1[baris][kolom]);
			printf("\n");
		}
	}
	printf("\n");
	printf("\nPenjumlahan Array Pertama dan kedua : \n");
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4; kolom++){
			hasil[baris][kolom] = matrix1[baris][kolom]+matrix[baris][kolom];
		}
	}
	for(baris=0; baris<3; baris++){
		for(kolom=0; kolom<4; kolom++){
			printf("%d", hasil[baris][kolom]);
			printf("\n");
		}
	}
	getch();
}

