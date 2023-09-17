#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node * del(struct node *, int);
int length(struct node *);

struct node {
	int data;
	struct node *link;
};
struct node *insert(struct node *head, int n) {
	struct node *temp;
	if (head == NULL) {
		head = (struct node *) malloc (sizeof(struct node));
		if (head == NULL) {
			printf("Error\n");
			exit(0);
	    }
	    head-> data = n;
	    head-> link = NULL;
    } else {
    	temp = head;
    	while (temp-> link != NULL)
    		temp = temp-> link;
    	temp-> link = (struct node *) malloc(sizeof(struct node));
    	if (temp->link == NULL){
      printf("Error\n");
    	exit(0);
	}
	temp = temp->link;
	temp->data = n;
	temp->link = NULL;
}
return head;
} 
void printlist(struct node *pnode) {
	if (pnode != NULL){
		while (pnode != NULL){
			printf("%d\t", pnode->data);
			pnode = pnode->link;
		}
	} else
		printf("Linkedlist kosong\n"); }

int main(void){
	int pilihan,nilai,pass;
	char nm[20];
	char npm[20];
	char kls[20];
	char jrsn[20];
	int n = 0, x = 0, i = 0;
	int pil;
	struct node *start = NULL;
	while(pilihan!=2){	
	
	printf("\n        MENU       ");
	printf("\n=====================");
	printf("\n1. Biodata         ");
	printf("\n2. Single Link List");
	printf("\n3. Exit            ");
	printf("\n=====================");
	printf("\nMasukan Pilihan  : ");
	scanf("%i", &pilihan);
	printf("=====================");
	switch(pilihan){
		case 1:
			
			printf("\nMasukan Nama Anda    : ");
			scanf("%s", &nm);
			printf("Masukan NPM Anda     : ");
			scanf("%s", &npm);
			printf("Masukan Kelas Anda   : ");
			scanf("%s", &kls);
			printf("Masukan Jurusan Anda : ");
			scanf("%s", &jrsn);
			printf("\nNama       : %s ", nm);
			printf("\nNPM        : %s ", npm);
			printf("\nKelas      : %s ", kls);
			printf("\nJurusan    : %s ", jrsn);
			getch();
			break;
		case 2:
			printf("\nMasukan banyak node yang akan dibuat pada Linklist : ");
			scanf("%d", &n);
			for (i = 0; i < n; i++) {
			printf("Data Pada Node-[%i] : ", i + 1);
			scanf("%d", &x);
			fflush(stdin);
			start = insert(start, x);
			}
			menu:
			printf("\n1. View Data-data linkedlist");
			printf("\n2. Hapus node");
			printf("\n3. Exit");
			printf("\nMasukan pilihan Anda : "); scanf("%d",&pil);
	
			if (pil == 1){
			printf("\nData-data pada Linked list sebagai berikut : \n");
			printlist(start);
			printf("\n\n");
			goto menu;
   			 }
			if (pil == 2){
			printf(" \nMasukan no node yang akan dihapus : ");
			scanf("%d", &n);
			fflush(stdin);
			start = del(start, n);
			printf("\nUpdate data pada linked list sebagai berikut: \n");
			printlist(start);
			printf("\n\n");
			goto menu;
			}
			
			
		break;
		case 3:
		printf("\n\nTerima kasih sudah mempercayai program ini\n\n");
		return 0;
		break;
		default:
		printf("\nTidak ada pilihannya :( ");
		break;
	}
	getch();
	printf("\n\n");
	system("pause");
	}
	return 0;
	}

		struct node * del(struct node *head, int node_no) {
	struct node *prev, *curr;
	int i;
	
	if (head == NULL) {
		printf(" tidak ada node pada linkedlist yang dapat dihapus\n");
    } else {
    	if (node_no > length(head)) {
    		printf("Angka yang anda masukan lebih besar dari panjang linkedlist");
		} else {
			prev = NULL;
			curr = head;
			i = 1;
			while (i < node_no) {
				prev = curr;
				curr = curr->link;
				i = i + 1;
			}
			if (prev == NULL) {
				head = curr->link;
				free(curr);
			} else {
				prev->link = curr->link;
				free(curr);
			}
		}
	}
	return head;
}

int length(struct node *pnode) {
	int pjg = 0;
	while (pnode != NULL) {
		pjg++;
		pnode = pnode->link;
	}
	
	return pjg;
}
