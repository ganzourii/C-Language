#include<stdio.h>
#include<stdlib.h>
#include<assert.h>



int main () {

	insertAtFirst(11);
	insertAtFirst(3);
	insertAtFirst(10);
	insertAtFirst(50);
	insertAtFirst(23);
	insertAtFirst(5);
	insertAtFirst(60);
    printf("Size is %d\n",SizeOfList()); fflush(stdout);
	printList(); fflush(stdout);
	int data,position;
    printf("Enter your data then the position\n"); fflush(stdout);
    scanf("%d %d",&data,&position);
    insertNodeInsideList(data,position);

	printList(); fflush(stdout);


}
