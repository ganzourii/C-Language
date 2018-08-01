#include <stdio.h>

void swap (int* a, int* b){

	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;


}


int main () {

	int x,y;
	void (*Ptr)(int*,int*) = swap;
	scanf("%d %d",&x,&y);

	(*Ptr)(&x,&y);

	printf("%d %d",x,y);

}
