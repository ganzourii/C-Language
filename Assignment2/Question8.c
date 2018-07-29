#include <stdio.h>
void DisplayPrime(int a, int b) {
	int counter;
	for (int i = a; i <=b;i++){
		counter =0;
	for(int x = i; x>0;x--){
		if(i%x == 0) counter++;
	}
	if(counter == 2){ printf("%d ",i);}
  }

}



int main(void){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	DisplayPrime(num1,num2);


	return 0;
}
