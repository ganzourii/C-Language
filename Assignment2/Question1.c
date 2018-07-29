#include <stdio.h>

/* Function that prints the cube of any number */

void Cube (int a); /* declartion of the function */


int main(void){

	int x;
	printf("Enter your number: "); fflush(stdout);
	scanf("%d",&x); /* getting the number from the user */
    Cube(x); /* calling the function, prints the the result and doesn't return anything */

	return 0;
}

/* the function defintion */

void Cube (int a){

	printf("%d Cube is %d",a,a*a);

}
