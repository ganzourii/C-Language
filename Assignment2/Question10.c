#include <stdio.h>

void Fibonacci(int a,int b){

int new;
new = a+b;
printf("%d ",a);
fflush(stdout);

if(a>100){ } /* the range the fibonacci will stop at.. */

else { Fibonacci(b,new);} /* it will call itself until a become >100 */

}

int main (void){

 	Fibonacci (3,5); /* arguments is the start numbers the fibonacci will start from */

	return 0;

}
