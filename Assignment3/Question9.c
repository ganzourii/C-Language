#include <stdio.h>
/* implemented wit for/while */
int Fibonaccii (int a) {

	if (a == 1 || a == 2) {return 1; }

	return Fibonaccii (a-2) + Fibonaccii (a-1) ;

}


int Fibonacci (int a) {

	int i,temp;
	int first= 1;
	int second =1;

	if(a == 1 || a == 2) { return 1; }

	for (i =3; i<=a;i++){
		temp = second;
		second = first + second;
		first = temp;
	}

	return second;


}

int main(){

		int order;
		printf("Enter the number of term you want .."); fflush(stdout);
		scanf("%d",&order);

		printf("The %d th term is %d  and %d ",order,Fibonacci(order),Fibonaccii(order));



	}

