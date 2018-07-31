#include <stdio.h>

#define size 10

int Total (int *a , int b) {
	 int i ;
	 int Sum =0;
	 for(i=0;i<b;i++) {
		 Sum += a[i];
	 }

	 return Sum;
}

int main () {

	int i;

	int array[size] = {0};
	printf("Enter 10 numbers.. \n");
	fflush(stdout);

	for (i =0; i<size;i++){

		scanf("%d", &array[i]);

	}

printf("Sum is %d",Total(array,size));

}

