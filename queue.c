#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct bank
{
	char nama[20];
	char npm[20];
};

int main(){
	struct bank data[10];
	int pil,n,i,pil2;
	int head=0,tail=0,pil3,m,e=0;
	
	awal :
		printf("\n========== PROGRAM ANTRIAN ==========\n\n");
		printf("MENU :\n\n");
		printf("1.INPUT\n");
		printf("2.HAPUS\n");
		printf("3.LIHAT\n");
		printf("4.KELUAR\n\n");
		
		printf("Masukkan Pilihan : ");
		scanf("%d",&pil);
		system("cls");
		
		switch(pil){
			case 1:
				if(tail==10)
				{
					printf("\nMaaf antrian penuh!!\n\n");
					system("pause");
					system("cls");
					goto awal;
				}
				else
				{
					printf("Masukkan jumlah data antrian : ");
					scanf("%d",&n);system("cls");
					
					for(i=0;i<n;i++);
					{
						printf("Input data ke-%d :\n\n",(tail+1)-head);
						fflush(stdin);
						printf("Input Nama		: ");
						gets(data[tail].nama);
						printf("Input NPM		: ");
						gets(data[tail].npm);
						printf("\n\n");
						tail++;
					}
					system("cls");
					goto awal;
				}
				break;
				case 2:
					if(tail==NULL || head==tail)
					{
						printf("\nMaaf, tidak ada antrian\n\n");
						system("pause");
						system("cls");
						goto awal;
					}
					else
					{
						printf("\nPenghapusan berhasil\n\n");
						
						head++;
						system("pause");
						system("cls");
						goto awal;
					}
					break;
				case 3:
					if(head==tail || head>tail)
					{
						printf("\nMaaf, tidak ada antrian\n\n");
						system("pause");
						system("cls");
						goto awal;
					}
					else{
						printf("DATA ANTREAN : \n\n");
						for(i=head;i<tail;i++)
						{
							printf("Nama		: %s\n",data[i].nama);
							printf("NPM			: %s\n\n",data[i].npm);
						}
						system("pause");
						system("cls");
						goto awal;
					}
					break;
					case 4:
						printf("TERIMAKASIH");
						exit(0);
					default:
						printf("Maaf, pilihan anda salah!\n");
						system("pause");
						system("cls");
						goto awal;
		}
}
