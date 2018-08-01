#include<stdio.h>


int main () {

	int Array [10];
	int *Ptr[2];
	int i;
	Ptr[0]=Array;
    int Max;
	for (i=0;i<10;i++){

		scanf("%d",(Ptr[0]+i));
	}
	Max = *Ptr[0];
	for (i=0;i<10;i++){

    printf("%d ",*(Ptr[0]+i));
	if (Max< *(Ptr[0]+i) ){ Max = *(Ptr[0]+i);
	Ptr[1]=(Ptr[0]+i);
	}

	}

	printf("\nThe max value is  %d ",*(Ptr[1]));








}
