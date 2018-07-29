#include <stdio.h>

void AlphabetCheck (char a);  /* declartion of the function */


int main (void){

	char input;
	printf("Enter the character: ");
	fflush(stdout);
	scanf("%c",&input); /* taking character from user to check */
	AlphabetCheck(input); /* calling the function to check the input character */

	return 0;
}


/* defintion of the function */

void AlphabetCheck (char a){

	if ((a>=65 && a<=90)||(a>=97 && a<=122)){
		printf("the character %c is Alphabet",a);
		}
	else {printf("the character %c is not Alphabet",a); }

}
