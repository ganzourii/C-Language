#include <stdio.h>
#include <string.h>

void Reverse(char *a){
	int temp;
	int length = strlen(a);
	int i;
	for(i=0; i< (length/2) ;i++){
		temp=a[i];
		a[i] = a[length -1 -i];
		a[length -1 -i] =temp;

	}
}

int  main () {

	char c [50];
	gets(c);
	Reverse(c);
	printf("%s",c);



}
