#include <stdio.h>
main()
{
int a,b,c,j,z,x,w,y;
int total = 1;
float hasil;
do
{
printf("\n************\n");
printf("\n===========MENU UTAMA===========\n");
printf("\n************\n");
printf("\n1. Calculator");
printf("\n2. Faktorial");
printf("\n3. Bintang");
printf("\n4. Keluar");
printf("\nMasukkan pilihan Anda (1..4): ");scanf("%d",&c);

switch (c){
 case 1: {
 printf("**********\n");
 printf("========Calculator========\n");
 printf("**********\n");
 printf("Masukkan bilangan ke-1 = ");
 scanf("%d", &a);
 printf("Masukkan bilangan ke-2 = ");
 scanf("%d", &b);
 printf("**********\n");
 printf("hasil %d + %d = %d\n",a,b,a+b);
 printf("hasil %d - %d = %d\n",a,b,a-b);
 printf("hasil %d x %d = %d\n",a,b,a*b);
 printf("hasil %d : %d = %d\n",a,b,a/b);
 break;
 }

 case 2: {
 printf("**********\n");
 printf("=========Faktorial========\n");
 printf("**********\n");
 printf("Masukkan angka : ");
 scanf("%i",&z);
 for(j=1;j<=z;j++)
 {
 total = total * j;
 printf("faktorial %i = %i\n", j, total);
 }
 break;
 }

case 3: {
 printf("**********\n");
 printf("==========Bintang=========\n");
 printf("**********\n");
 printf("Masukkan angka : ");
 scanf("%i", &x);
 for(w=1;w<=x;w++) {
 for(y=1;y<=w;y++) {
 printf("*",w,y); }
 printf("\n");
 }
 break;
 }

case 4: {
 printf("Terima Kasih");
 break;
 }
}
printf("\n-------------------------\n");
 printf("\n");
 printf("\n");
 printf("\n");
 }while(c<=3);
 
return 0;

}
