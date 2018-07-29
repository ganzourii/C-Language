#include <stdio.h>


char Convert (char a){

	return a - 32 ;
}

int main (void){

	char character;
	scanf("%c",&character);
	character = Convert(character);
	printf("%c",character);
	return 0;
}
