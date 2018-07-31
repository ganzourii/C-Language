#include<stdio.h>

#define size 10

void Selection_Sort (int * a, int b ) {

	int i,j,temp,min,minNum;

	for (i=0;i<size;i++){
		min = a[i];

		for(j=(i+1);j<size;j++) {

			if(a[j]<min){

				min = a[j];
                minNum = j;
			}
		}
		if (min != a[i]){
			temp = a[minNum];
			a[minNum]=a[i];
			a[i]=temp;
      }
	}
}



int main () {
	int Array[size];
	int i;
	printf("Unsorted Array :" );
	for (i=0; i<size;i++) {
		scanf("%d",&Array[i]);

		printf("%d ",Array[i]);
	}

	Selection_Sort(Array,size);

	printf("\nSorted Array   :" );
	for (i=0; i<size;i++) {
			printf("%d ",Array[i]);
		}

}
