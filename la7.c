#include <stdio.h>
#include <conio.h>

main(){
	int i,j;
	int matrix[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Input elemen ke %d %d : ",i+1,j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	for(i=0;i<3;i++){
		printf(" | ");
		for(j=0;j<3;j++){
			printf(" %d ",matrix[i][j]);
		}
		printf(" | \n");
	}
	return 0;
}
