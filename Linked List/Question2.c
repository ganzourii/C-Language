#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node* next;
};

struct node * head=NULL;
struct node *current=NULL;
struct node *prev=NULL;


int SizeOfList(void){

int counter =0;

if ( head == NULL ){
	printf("size equal %d, There's no list",counter);
	return -1;
}
current = head;
counter =1;
while (current->next != NULL){
	counter ++;
	current = current->next;
}
return counter;

}
void insertAtFirst(int data){

	struct node * link = (struct node *)malloc(sizeof(struct node));
	link->data =data;

	if ( head == NULL){
		link->next =NULL;
		head =link;
		return;
	}

	link->next = head;
	head = link;
	return;
}

void insertAtLast(int data){

	struct node *link = (struct node*)malloc(sizeof(struct node));

	link->data = data;
	link->next = NULL;

	if (head == NULL){
		head = link;
		return;
	}

	current = head;

	while(current->next != NULL){

		current = current->next;
	}

	current->next = link;

}

void printList (void){

	struct node* ptr = head;
	int Position =0;
	while (ptr != NULL){
	printf("[%d]= %d  ",Position,ptr->data);
	ptr = ptr->next;
	Position ++;
	}
	printf("\n");


}



void Insert (int data,int pos){

	int position = 0;
	struct node* link = (struct node*)malloc(sizeof(struct node));
	link->data =data;

    if (head == NULL ){
    	printf("There's No List\n");
    	return;
    }
    if (pos> SizeOfList()){

    	printf("The position doesn't exist in the list\n");
    	return;
    }

    if (pos == 0){

    	link->next = head;
    	head = link;
    	return;
    }

    current = head->next;
    prev = head;
    position =1;

    while (pos > position){
    	     prev = current;
    	  	 current=current->next;
    	  	 position++;
    	    }

	link->next=current;
	current = link;
	prev->next=current;
	return;

}


int ReturnTheMiddle(void){

	struct node* ptr1 = head;
	struct node* ptr2 = head;


	if ((SizeOfList() % 2) == 0){

		printf("There's no middle to the list because its size is even number will return -1 \n");
		return -1 ;
	}
	if (head == NULL) {

		printf("There's no List will return -1 \n");
		return -1;
	}

	if (head->next == NULL){
		return head->data;
	}


	while (ptr2->next !=NULL){

	ptr1 = ptr1->next;
	ptr2=ptr2->next->next;
	}

	return ptr1->data;

}


int main () {

	insertAtFirst(10);
	insertAtFirst(50);
	insertAtFirst(70);
	insertAtFirst(30);
    insertAtFirst(20);
    insertAtFirst(10);
	printList(); fflush(stdout);
    printf("The data is %d\n",ReturnTheMiddle()); fflush(stdout);


	return 0;

}
