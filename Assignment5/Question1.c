#include<stdio.h>
#include <stdlib.h>
typedef struct{
	char name[50];
	int roll;
	int mark;
}Student;


int main (){

	Student S1;

	gets(S1.name);

	scanf("%d",&S1.roll);

	scanf("%d",&S1.mark);

	printf("Name: %s \nRoll: %d \nMark: %d",S1.name,S1.roll,S1.mark);

	return 0;
}
