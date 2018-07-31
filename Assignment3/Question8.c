#include <stdio.h>
int Geometric(int a){

	int i;
	int Number =1;
	for(i=1;i<=a;i++){

		Number = (Number*2)+Number;

	}
	return Number;


}


int main(){
	int order;
	printf("Enter the number of term you want .."); fflush(stdout);
	scanf("%d",&order);

	printf("The %d th term is %d",order,Geometric(order));



}
