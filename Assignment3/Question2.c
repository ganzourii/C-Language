#include<stdio.h>
#include<string.h>

int Check (char *a){
	int size = strlen(a);
	int i,j;
	for(i=0;i<size;i++){

		for(j=(i+1);j<size;j++){

			if ( a[i]==a[j] /*|| a[i] == (a[j]+32) || (a[i]+32) == a[j]*/ ){

				return 0;
			}
		}
	}

return 1;
}


int main () {

	char x[50];

	gets(x);
	int check = Check(x);
	if (check == 1){
		printf("TRUE\n");
	}
	else{
		printf("FALSE\n");
	}


}
