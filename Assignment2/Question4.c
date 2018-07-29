#include <stdio.h>

int ArOperation (char a ,int x, int y);

int main (void){
	char op; int num1,num2,result;
	printf("Enter the operation then two numbers : ");
	fflush(stdout);
	scanf ("%c",&op);
	scanf ("%d",&num1);
	scanf ("%d",&num2);
	result = ArOperation(op,num1,num2);

    printf("The result is %d ",result);
    fflush (stdout);
}


int ArOperation (char a,int x, int y) {

	int result;

	switch(a){

	case '+' : result = x + y;
	           break;
	case '-' : result = x - y;
		       break;
	case '*' : result = x * y;
		       break;
	case '/' : result = x / y;
		       break;
	default :   printf("Error! You entered wrong operation..");
	            fflush (stdout);
	}
	return result ;

}
