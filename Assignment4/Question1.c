
#define size 10

#include <stdio.h>


int main () {
	int Array[10];
    int* x= Array ;
	int i;
	int sum=0;
	for ( i = 0 ; i<size; i++){

		scanf("%d",(x+i));
		sum+= *(x+i);
	}

	printf("%d",sum);
}
