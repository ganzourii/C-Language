#include<stdio.h>
#define size 10

int smallestvalue(int* a,int b){
int i;
int min = *a;
	for(i=1;i<size;i++){

		if(min>*(a+i)) {min = *(a+i);}

	}

return min;
}



int main () {
	int Array[size];
	int i;
	for(i=0;i<size;i++){

		scanf("%d",&Array[i]);

	}
	printf("the smallest element is %d",smallestvalue(Array,size));


}
