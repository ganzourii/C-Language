#include <stdio.h>
void MultipleCheck (int a , int b){

	if (a%b == 0){ printf("%d is multiple %d",a,b);}
	else { printf("%d is not multiple %d",a,b);}
}

int main (void){

	int num1,num2;
	scanf("%d %d",&num1,&num2);
	MultipleCheck(num1,num2);

	return 0;
}
