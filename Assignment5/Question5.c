#include <stdio.h>

typedef struct{
	struct name {
		char first_name[20]; char second_name [20];
	}n1;
	int id;
	int grade;
}student;

void store (student * a,int b){
    int i;
	for (i=0;i<b;i++){

	printf("Enter Student Number %d ",(i+1)); fflush(stdout);

	scanf("%s %s %d %d",(a->n1.first_name),(a->n1.second_name),&(a->id),&(a->grade));
	a++;
	}

}

void print (student * a,int b){

	int i;
	for (i=0;i<b;i++){
    printf("Student Number %d: Name:%s %s  Id:%d  grade:%d",(i+1),((a+i)->n1.first_name),((a+i)->n1.second_name),(a+i)->id,(a+i)->grade);fflush(stdout);
    printf("\n");

	}
}


int main (){

	student S[3];
	printf("%p\n",&(S[1])); fflush(stdout);

	store(S,3);
	print(S,3);
	return 0;
}
