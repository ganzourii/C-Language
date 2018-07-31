

#include<stdio.h>

#define size 10


void Bubble_Sorting (int * a,int x){
	int i,j,temp;

	for(i=0;i<size;i++){
		for(j=0;j<(size-1);j++){

			if(a[j]>a[j+1]){
				temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
			}
        }
	}
}


int main () {

	int i;
	int Array[size];
	  printf("\nUnsorted Array : ");

	for(i=0;i<size;i++){

		scanf("%d",&Array[i]);
		printf("%d\t",Array[i]);
	}

	Bubble_Sorting(Array,size);
	  printf("\nSorted Array   : ");
	for(i=0;i<size;i++){

		printf("%d\t",Array[i]);
	}



}
