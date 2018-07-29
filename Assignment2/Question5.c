#include <stdio.h>

void EvenOdd(int a);



int main (void){
	int x;
	scanf("%d",&x);
	EvenOdd(x);

}
void EvenOdd(int a){

	if ((a%2)==0) { printf("The Number %d is Even",a);
	}
	else {printf("The Number %d is Odd",a);}

}
