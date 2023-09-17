#include "stdio.h"

int main(){
	int i, x;
	printf ("input x : ");
	scanf ("%d", &x);
	for (i = 1; i<8; i+=2){
		x *= 2;
		printf ("%d ", x);
		if (i == 3) continue;
		x *= i+1;
	}
	printf ("%d ", x);
	return 0;
}
