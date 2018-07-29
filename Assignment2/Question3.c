#include <stdio.h>

 void NumberCheck (int a);

 int main (void){
	 int Number;
	 {printf("Enter the number: ");
	 fflush(stdout);
	 scanf("%d",&Number);
	 NumberCheck(Number);
	 }
	 return 0;
 }

 void NumberCheck (int a) {

	 if (a >0){ printf("Number %d is Positive",a);
	 }
	 else if (a<0){printf("Number %d is Negative",a);}
	 else {printf("Zero neither positive nor negtaive number");}
 }
