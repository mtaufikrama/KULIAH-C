#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct human{
	int age;
	char name[30];
	struct human *next, *prev;
}*head, *tail, *current;

void pushTail(int age, char name []){
	current = malloc(sizeof(struct human));
	strcpy(current->name, name);
	current->age = age;
	current->prev = current->next=NULL;
	
	if(head==NULL){
		head=tail=current;
	}else{
		current->prev = tail;
		tail->next = current;
		tail = current;
	}
}

void pushHead(int age, char name[]){
	current = malloc(sizeof(struct human));
	strcpy(current->name, name);
	current->age = age;
	current->next = current->prev=NULL;
	
	if(head==NULL){
		head=tail=current;
	}else{
		head->prev=current;
		current->next=head;
		head=current;
	}
}

void pushMid(int age, char name[]){
	if(head==NULL){
		pushHead(age,name);
	}else if(age < head->age){
		pushHead(age,name);
	}else if(age > tail->age){
		pushHead(age,name);
	}else{
		current = malloc(sizeof(struct human));
		strcpy(current->name, name);
		current->age =age;
		current->next = current->prev=NULL;
		
		struct human *temp=head;
		while(temp!=NULL && temp->age < current->age){
			temp=temp->next;
		}
		current->prev=temp->prev;
		current->next=temp;
		
		temp->prev->next=current;
		temp->prev=current;
	}
}

void popMid(int age){
	int temu=0;
	if(head==NULL){
		printf("No Data\n");
	}
	else{
		current=head;
		while(current!=NULL){
			if(current->age==age){
				temu=1;
				break;
			}
			current=current->next;
		}
		if(temu==1){
			if(current==head){
				printf("\nHead tidak bisa di hapus!!\n");
			}
			else if(current==tail){
				printf("\nTail tidak bisa di hapus!!\n");
			}
			else{
				current->prev->next=current->next;
				current->next->prev=current->prev;
				free(current);
			}
		}
		else{
			printf("Data Not Found\n");
		}
	}
}

void print(){
	current=head;
	if(current!=NULL){
		while(current!=NULL){
			printf("Umur : %d | Name : %s\n", current->age, current->name);
			current=current->next;
		}
	}else{
		printf("No Data\n");
	}
}
int main(){
	int h;
	pushTail(30, "Tail");
	pushMid(17, "A");
	pushMid(12, "B");
	pushMid(13, "C");
	pushMid(20, "D");
	pushHead(15, "Head");
	print();
	
	printf("\nPilih Umur pada Body yang dihapus : ");
	scanf("%d",&h);
	popMid(h);
	printf("\n");
	print();
	
	getchar();
}
