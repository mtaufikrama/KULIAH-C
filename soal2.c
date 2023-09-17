#include <stdio.h>

void main(){
	int x=25, y = 30;
	int a, b, c;
    a = x-- >> 2; 
    b = y ^ 5; 
    c = -(x | y);
    printf ("\na = %d", a);
	printf ("\nb = %d", y);
    printf ("\nc = %#x", c);
}
