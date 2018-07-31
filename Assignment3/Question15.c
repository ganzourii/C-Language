#include<stdio.h>
#include<string.h>

void Stick (char *a,char *b){
	int i;
	int length1= strlen(a);
	int length2= strlen(b);

	for(i = length1; i<= (length1+length2); i++){
		a[i]=b[i-length1];
	}
}

int main () {

	char c[50];
	char d[50];
	gets(c);
	gets(d);
	Stick(c,d);
	printf("%s",c);




}
