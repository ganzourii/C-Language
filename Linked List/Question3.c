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


int thefifthelement(void){

	struct node * ptr1= head;
	struct node * ptr2= NULL;
	if (head == NULL){

		printf("There'n no LIST will return -1\n");
		return -1;
	}
	if (head->next ==NULL){

	return ptr1->data ;
	}

	if (SizeOfList() < 5) {
		printf("List is smaller than 5\n");
	}
	else{

    ptr2= head->next->next->next->next;

	while (ptr2->next != NULL){

		ptr1=ptr1->next;
		ptr2=ptr2->next;

	 }

	return ptr1->data;

   }
	return -1;
}



int main (){

    insertAtFirst(10);
    insertAtFirst(15);
    insertAtFirst(20);
    insertAtFirst(30);
    insertAtFirst(375);
    insertAtFirst(70);


	printList(); fflush(stdout);
    printf("Data of 5th element from the end is %d\n",thefifthelement()); fflush(stdout);
}
