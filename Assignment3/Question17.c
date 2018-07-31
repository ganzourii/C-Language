#include <stdio.h>

void SwapContent (char *a,char *b) {
	int i,temp;

	for(i=0;(a[i] != '\0'&& b[i] != '\0');i++){
		temp =a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}



int main() {

	char c[50];
	char e[50];

	gets(c);
	gets(e);

	SwapContent(c,e);

	printf("%s \n%s",c,e);

}
