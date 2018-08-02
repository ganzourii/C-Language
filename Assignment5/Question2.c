#include<stdio.h>

typedef struct {
	int Inch;
	int Feet;

}Distance;


int main (){

	Distance D1,D2;
int Sum,type;

do{
	printf("Enter 0:Inch 1:feet\n"); fflush(stdout);
	scanf ("%d",&type);
	if(type == 0) {
	scanf("%d %d",&D1.Inch,&D2.Inch);
	Sum = D1.Inch + D2.Inch ;
	printf("Sum is %d Inch",Sum);
	}
	else if (type == 1){
		scanf("%d %d",&D1.Feet,&D2.Feet);
		Sum = D1.Feet + D2.Feet ;
		printf("Sum is %d Feet",Sum);

	}

}while((type != 1) && ( type != 0));



}
