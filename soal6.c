#include<stdio.h>
#include<math.h>

int main(){
    int un;
    int total = 0;
    char nm[25];
    
    printf("Nama : ");
    gets(nm);
    printf("Banyak Angka : ");
    scanf("%d", &un);
    
    int x; 
	int deret;
	
	printf ("Deret : ");
	
    for(x=0;x<un;x++){
        deret=pow(2, x);
        total = total + deret;
        printf("%d ", deret);
    }
    printf("= %d ", total);
}
