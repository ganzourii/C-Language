#include<stdio.h>

typedef struct {

	int real;
	int img;
}ComplexNumber;

ComplexNumber AddComplex (ComplexNumber a , ComplexNumber b){

	ComplexNumber Sum;

	Sum.real = a.real + b.real ;
	Sum.img = a.img + b.img ;

	return Sum;

}

int main () {

	ComplexNumber Num1,Num2,Sum;

	printf("Enter First Complex Number's real part : "); fflush(stdout);
	scanf("%d",&Num1.real);
	printf("Enter First Complex Number's img part : "); fflush(stdout);
	scanf("%d",&Num1.img);

	printf("Enter Second Complex Number's real part : "); fflush(stdout);
    scanf("%d",&Num2.real);
	printf("Enter Second Complex Number's img part : "); fflush(stdout);
	scanf("%d",&Num2.img);
    Sum = AddComplex(Num1,Num2);
    printf("Sum is %d + %d j ",Sum.real,Sum.img);
}
