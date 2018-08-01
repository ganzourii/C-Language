#include <stdio.h>

#define size 10

int main () {
	int Array[size];
	int i;
	int*Ptr=Array;

	for(i=0;i<size;i++) { scanf( "%d", (Ptr+i) ); }
	for(i=size-1 ; i>=0 ;i--){ printf("%d ", *(Ptr+i)); }

}
