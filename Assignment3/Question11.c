#include <stdio.h>


int frequency (char * a, char b) {
	int i;
	int count =0;

	for (i=0; a[i] != '\0' ; i++) {

		if (a[i]==b) {count++;}

	}

	return count ;

}

int main () {

	char c[50];
	char check;


	gets(c);
	printf("Enter the character you wanna check on it .."); fflush(stdout);
	scanf("%c",&check);
    if (frequency(c,check) == 0) {printf("%c DOESN'T EXIST.",check);}
    else{
    	printf("the frequency of %c is %d",check,frequency(c,check));
    }

}
