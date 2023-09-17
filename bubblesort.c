#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int temp,n,i,k,p;
	
	printf("\n\tBUBBLE SORT\n");
	printf("\tInput Panjang Data : ");
	scanf("%d",&n);
	int x[n];
	for(i=0;i<n;i++){
		printf("\n\t Masukkan Element [%d] :: ",i);
		scanf("%d",&x[i]);
	}
	for(i=1;i<=n-1;i++){
		printf("\nIterasi ke-%d = ",i);
		for(k=n-1;k>0;k--){
			if (x[k] < x[k-1]){
				temp = x[k];
				x[k] = x[k-1];
				x[k-1] = temp;
			}
		}
		for(p=0;p<n;p++){
			printf("\t%d",x[p]);
		}
	}
	printf("\n\n\t BubbleSort SORTED :: ");
	for(p=0;p<n;p++){
		printf("\t%d",x[p]);
	}
	getch();
}
