#include<stdio.h>
#include <string.h>
typedef union {

	char first_name [30];
	char last_name [30];

}family_name;

int main () {
	family_name n1;
	gets(n1.first_name);
	printf("%s",n1.last_name);
	printf("\n%d",sizeof(n1));





	return 0;
}
