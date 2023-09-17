#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node * del(struct node *,int); 
int length(struct node *);

struct node {
	int data;
	struct node *link;
};
struct node *insert(struct node *head, int n){
	struct node *temp;
	if (head == NULL){
		head = (struct node *)malloc(sizeof(struct node));
		if (head == NULL) {
			printf("Error\n");
			exit(0);
		}
		head->data =n;
		head->link = NULL;
	}else{
		temp = head;
		while (temp->link != NULL) 
			temp = temp->link;
		temp->link =(struct node *) malloc (sizeof(struct node));
			if(temp ->link ==NULL){
				printf("Error\n");
				   exit(0);
			}
			temp = temp->link;
			temp->data =n;
			temp->link =NULL;
		
	}
	return head ;
}
void printlist(struct node *pnode){
	if (pnode !=NULL){
		while (pnode != NULL){
			printf("%d\t", pnode->data);
			pnode = pnode->link;
		}
	}else
	printf("Linkedlist kosong\n");
}

int main(void){
	int n = 0, x=0, i=0;
	int pil;
	struct node *start = NULL;
	printf("masukan banyak node yang akan di buat pada linklist =");
	scanf("%d",&n);
	for (i=0; i< n; i++){
		printf ("data pada node-[%i]=",i +1);
		scanf("%d", &x);
		fflush(stdin);
		start = insert(start,x);
	}
	menu:
		printf("\n1. view data data linked list");
		printf("\n2. Hapus node");
	printf("\n3. Exit");
	printf("\nMasukkan pilihan Anda : "); scanf("%d",&pil);
	
if (pil == 1){
	printf("\nData-data pada linked list sebagai berikut :\n");
	printlist(start);
	printf("\n\n");
	goto menu;
	}
if (pil == 2){
	printf("\nMasukkan no node yang akan dihapus : ");
	scanf("%d", &n);
	fflush(stdin);
	start = del(start, n);
	printf("\nUpdate data pada linked list sebagai berikut : \n");
	printlist(start);
	printf("\n\n");
	goto menu;
	}
printf("\n\n");
system("pause");
return 0;
}
struct node * del(struct node *head, int node_no){
	struct node *prev, *curr;
	int i;
	
	if (head == NULL) {
	printf(" tidak ada node pada linkedlist yang dapat dihapus\n");	
	} else {
		if (node_no > length(head)) {
			printf("Angka yang anda masukkan lebih besar dari panjang linkedlist");
		} else {
			prev = NULL;
			curr = head;
			i = 1;
			while (i < node_no) {
				prev = curr;
				curr = curr -> link;
				i = i + 1;
			} 
			if (prev == NULL) {
				head = curr -> link;
				free(curr);
			} else {
				prev->link = curr -> link;
				free(curr);
} 
		}
		return head;
	}	
}

int length(struct node *pnode) {
	int pjg = 0;
	while (pnode !=NULL) {
		pjg++;
		pnode = pnode->link;
	}
	
	return pjg;
  }
