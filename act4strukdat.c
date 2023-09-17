#include <stdio.h>

main() {
int i,num,range,j,top, pil1;
char stack[i];
int pil = 0;

do{
printf("\n+=====MENU UTAMA=====+");
printf("\n+====================+");
printf("\n| 1. Push Stack      |");
printf("\n| 2. View Stack      |");
printf("\n| 3. Pop Stack       |");
printf("\n| 4. Keluar          |");
printf("\n+====================+");
printf("\nPilihan : ");
scanf("%d",&pil1);
printf("+====================+\n");

switch (pil1){
 case 1: {
 printf("\nMasukkan Jumlah Stack : ");
 scanf("%d", &range);
 for(i=0;i<range;i++){
 	printf("Push elemen stack : ");
 	scanf("%s",&num);
 	stack[i] = num;
 }
 break;
}

 case 2: {
 for(j=i;j<=0;j--){
 	printf("\n | %c |", stack[j]);
 }
 printf("\n ------\n");
 break;
}

case 3: {
 system("cls");
 if(i<=0){
 	printf("\n Stack Kosong !! \n");
 	return 0;
 }
 else {
 	printf("\n Pop Elemen Stack Berhasil !\n\n");
 	i--;
 	system("Pause");
 }
 break;
}

case 4: {
return 0;
default : printf("\n Maaf pilihan tersebut tidak tersedia !!");
}
}
printf("\n-------------------------\n");
 printf("\n");
 printf("\n");
 printf("\n");
 }while(pil1<=3);
}
