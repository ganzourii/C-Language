#include <stdio.h>
void SWAP (int *num1 , int *num2){
	int a;
	a=*num2;
	*num2=*num1;
    *num1 = a;
}

int main (void){

	int num1,num2;

	scanf("%d %d",&num1,&num2);
	printf("num1= %d , num2 = %d \n",num1,num2);
	SWAP( &num1, &num2);
	printf("num1= %d , num2 = %d",num1,num2);





	return 0;
}
