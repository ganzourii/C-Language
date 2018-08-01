#include<stdio.h>

void copy (int*a,int *b,int x){
	int i;
	for(i=0;i<x;i++){

		*(b+i)=*(a+i);
	}

}


int main () {
	int Array1[5];
	int Array2[5];
    int i;

for (i = 0;i<5;i++){scanf("%d",&Array1[i]);
printf("%d ",Array1[i]);}

printf("\n");
copy (Array1 ,Array2 ,5 );

for (i = 0;i<5;i++){ printf("%d ",Array2[i]); }
}

