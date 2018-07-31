#include <stdio.h>
#define size 5
int IndexEqual(int *a,int x, int b){
	int i;

	for(i=0;i<x;i++){
		if ( a[i] == b) {return i; }
	}

	return -1;
}

int main () {
	int Array[size];
	int i,Number,Index;

	for(i=0;i<size;i++){

			scanf("%d",&Array[i]);

		}
	printf("Enter the number you searching for .. "); fflush(stdout);

	scanf("%d",&Number);
	 Index = IndexEqual(Array,size,Number);
	if ( Index == -1) {	printf("%d DOESN'T EXIST.",Number);}
	else {	printf("The index of this number is %d",Index ); }



}
