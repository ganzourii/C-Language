#include<stdio.h>


typedef enum {

	Level1=1,Level2,Level3


}fan_level;

int main() {

	int i;
	printf("Enter the level of fan 1:Level1  2:Level2  3:Level3");
	fflush(stdout);

	scanf("%d",&i);

	if(i==Level1) {printf("LEVEL1 Fan."); fflush(stdout);}
	else if (i==Level2) {printf("LEVEL2 Fan."); fflush(stdout);}
	else if (i==Level3) {printf("LEVEL3 Fan."); fflush(stdout);}







	return 0;
}
