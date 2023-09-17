#include <stdio.h>

void main(){
	int a = 1, x = 4, b;
	do{
		printf("%d", ++x);
		b = x + a++;
	}
	while (a <= 4);
	printf ("\nb = %d ", b);
}

