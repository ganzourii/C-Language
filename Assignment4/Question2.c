#include <stdio.h>
#include <string.h>
int main () {

	char *ptr;
	char Str [20];
	int count =0;
	gets(Str);

	ptr =Str;
	for (count =0; *(ptr+count) != '\0' ; count++);

    printf("%d",count);


}
