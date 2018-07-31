#include <stdio.h>
#define size 4

void Reverse (int *a,int b ){
	int i,temp;

	for  (i=0;i< (size/2);i++){

		temp=a[i];
		a[i]=a[size-1-i];
		a[size-1-i]=temp;
	}
}

int main () {

	int Array[size];
	int i;

	for ( i=0;i<size;i++){
		scanf("%d",&Array[i]);
		printf("%d ",Array[i]);
	}


	Reverse(Array,size);
	printf("\nReversed: ");

	for ( i=0;i<size;i++){
			printf("%d ",Array[i]);
		}




}

