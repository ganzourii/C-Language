#include<stdio.h>

void CharacterSelection(char *a){
	int i;
	int j;

	for(i=0;a[i] != '\0' ;i++){

		if(!((a[i] >= 65 && a[i]<=90)||(a[i] >= 97 && a[i]<=122)|| a[i] ==' ' )){

			for( j = i; a[j] != '\0' ;j++){a[j] = a[j+1];}
			i--;
		}

	}

}

int main () {

	char c[50];
	gets(c);
	CharacterSelection(c);
	printf("%s",c);


}
