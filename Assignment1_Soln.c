//Question1


/*
int main(void){

	int num1 , num2, Result;

	scanf("%d %d",&num1,&num2);
	Result = ((num1+num2)*3)-10;
	printf("%d",Result);


	return 0;
}
*/
//Question2
/*
#include <stdio.h>

int main(void){

	printf("AhmadGanzouri \n20 yrs");

	return 0;
}
*/
//ََQuestion3
/*
#include <stdio.h>

int main(void){

    int CelciusTemp; int FehrenheitTemp;

	scanf("%d", &CelciusTemp);

	FehrenheitTemp = ( CelciusTemp * 9 / 5) + 32 ;

	printf("%d",FehrenheitTemp);

	return 0;
}
*/


//Question4
/*
#include <stdio.h>

int main(void){

    int r; float area; float mo7et;
	scanf("%d", &r);
area = ((float) 22 / 7 ) * r * r;
mo7et = 2 * ( (float) 22 / 7 ) * r;
	printf("Area %f \nMo7et %f",area,mo7et);

	return 0;
}
*/

//Question5
/*
#include <stdio.h>

int main(void){

	char a;
	scanf("%c", &a);


	printf("%d",a);

	return 0;
}
*/
//Question6
/*
#include <stdio.h>

int main(void){

	int num1; int num2;

	scanf("%d %d", &num1,&num2);
if( num1 == num2) printf("%d is equal %d\n",num1,num2);
else if( num1 != num2) printf("%d is not equal %d \n",num1,num2);
if( num1 > num2) printf("%d is higher than %d\n",num1,num2);
else  printf("%d is higher than %d\n",num2,num1);

	return 0;
}
*/
//Question7
/*
#include <stdio.h>

int main(void){

	int smallest; int num1;
	scanf("%d",&smallest);
	scanf("%d",&num1);
	if (num1 < smallest) smallest = num1;
	scanf("%d",&num1);
	if (num1 < smallest) smallest = num1;

	printf("The smallest %d",smallest);


	return 0;
}
*/
//Question8


/*
#include <stdio.h>
#include <math.h>

int main(void) {

	unsigned int num1; unsigned int root2;

	scanf("%d",&num1);

	root2 = sqrt( num1 );
	root2 = root2*root2;

    if (num1 == root2 ) { printf("PS"); }


	return 0;
}
*/

/*
int main(void) {

	unsigned int grade ;

	scanf("%d",&grade);

    if (grade >=  85) { printf("Excellent"); }
    else if(grade >= 75) { printf("Very Good");}
    else if(grade >= 65) { printf("Good");}
    else if(grade >= 50) { printf("Pass"); }
    else if(grade < 50) { printf("Fail");}

	return 0;
}
*/

/*
int main(void) {

    char op; unsigned int  num1,num2,Result;

	scanf("%c",&op);
	scanf("%d %d" ,&num1 ,&num2);

	switch (op){

	case '+' :  Result = num1 + num2;
	              printf("%d",Result);
	              break;
	case '-' :    Result = num1 - num2;
	              printf("%d",Result);
                  break;
	case '*' :    Result = num1*num2;
	              printf("%d",Result);
                  break;
	case '/' :    Result = num1/num2;
		          printf("%d",Result);
	              break;
	}

	return 0;
}
*/

/*
int main(void) {

     unsigned int sum=0; unsigned int counter,reading;
     for (counter = 0;counter < 100; counter ++){
    	 scanf("%d",&reading);
    	 sum = sum + reading;
     }
     printf("%d",sum);
	return 0;
}
*/

/*
int main(void) {

     unsigned int number ;
     unsigned int factorial =1;
     scanf("%d",&number);
     for(int i=number; i >0;i--){
    	factorial = factorial*i;
     }
     printf("%d",factorial);

	return 0;
}
*/

/*
int main(void) {

     unsigned int number,counter=0;
     scanf("%d",&number);
      for (int i = number; i >0;i--) {
    	  if ( ( number % i) == 0) { counter ++ ; }
      }
    	  if (counter == 2) { printf("It's a Prime Number."); }
    	  else { printf("It's Not a Prime Number.");   }
    	  return 0;
}
*/
/*
#include <stdio.h>
#include<stdlib.h>
int main(void) {

    char x;
	for (int i = 65 ; i <=90; i++){
	 x = i;
     printf("%c ",x);
     fflush(stdout);
	}
     return 0;
}
*/
/*
#include <stdio.h>
#include<stdlib.h>
int main(void) {

    unsigned int sum = 1; unsigned int number,power;
    scanf("%d %d",&number,&power);
    int i = power;
    while (i>0){

    	sum = sum *number;
    	i--;
    }

	printf("%d power %d equals %d",number,power,sum);
    return 0;
}
*/

/*
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {
    char reverse[50] ;
    char number [50] ;
    gets(number);
    int count = strlen(number);
    int y =0;
    for(int i = (count-1);i>=0;i--){
    	reverse[y] =  number[i];
    	y++;
    }

    for (y=0;y<count;y++){
    	printf("%c",reverse[y]);
    }


    return 0 }
*/

/*
#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(void) {
    char number [50] ;
    gets(number);
    int count = strlen(number);
	printf("%d",count );
 return 0;
}
*/


//Question 18/19
/*
#include <stdio.h>
#include<stdlib.h>

int main(void) {
	for (int y=5;y>=1;y--){

	for(int i=1;i<=y;i++){

		printf("*");

	}
	printf("\n");
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include<stdlib.h>
int main(void) {

	for ( int y=1;y<=5;y++){
		int x= 5-y;
		int f = 9-(x*2);
		for (int i = x ; i>=1 ;i--){printf(" "); }
		for (int z = f ; z>=1 ;z--){printf("*"); }
	    for (int i = x ; i>=1 ;i--){printf(" "); }
     printf("\n");
	}

	return 0;
}
*/
/*
#include <stdio.h>
#include<stdlib.h>
int main(void) {
int y;
	for ( y=1;y<=5;y++) {

		for (int i = y-1 ; i>=1 ;i--){printf(" "); }
	    printf("*");
	    int f = 11 - (y*2);
		for (int z = f ; z>=1 ;z--){printf(" "); }
		printf("*");
		for (int i = y-1 ; i>=1 ;i--){printf(" "); }
        printf("\n");
	}

	    for ( y=6;y<=10;y++) {

			for (int i = 10-y ; i>=1 ;i--){printf(" "); }
		    printf("*");
		    int f = (y*2)-11;
			for (int z = f ; z>=1 ;z--){printf(" "); }
			printf("*");
			for (int i = 10-y; i>=1 ;i--){printf(" "); }
	        printf("\n");
		}


	return 0;
}

*/
