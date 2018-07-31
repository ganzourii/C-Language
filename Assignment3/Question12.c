#include <stdio.h>

int Stringlength(char * a) {
	 int i,count =0;
	 for (i =0; a[i] != '\0' ; i++){
		 count ++;
	 }
	 return count;
 }

int main () {

	char c[50];
	gets(c);
	printf("Length of the string is %d", Stringlength(c) );

}
