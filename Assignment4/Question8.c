#include <stdio.h>

void swapContent (int* a, int* b , int x){
	int i;
	int temp;

	for(i=0;i<x;i++){

	 temp  = *(a+i);
	*(a+i) = *(b+i);
	*(b+i) = temp;
	}
}

int main () {
	int Array1[5];
	int Array2[5];
	int i;

	for(i=0;i<5;i++){
		scanf("%d",&Array1[i]);
		printf("%d ",Array1[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
			scanf("%d",&Array2[i]);
			printf("%d ",Array2[i]);
		}
	printf("\n");

	swapContent(Array1,Array2,5);

	for(i=0;i<5;i++){
		printf("%d ",Array1[i]);
	}
	printf("\n");
	for(i=0;i<5;i++){
			printf("%d ",Array2[i]);
		}





}
