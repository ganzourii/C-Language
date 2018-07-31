#include <stdio.h>
#include <string.h>
void Uppertolower(char * a){
	int i;

	for (i=0;a[i] != '\0';i++){
		if (65 <= a[i] && a[i] <= 90) { a[i] = a[i] + 32; }
	}

}

int main () {

	char c[50];

	gets(c);
	Uppertolower(c);
   printf("%s",c);
}
