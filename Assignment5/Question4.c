#include <stdio.h>
#include <math.h>
typedef struct {
	float hours;
	float mins;
	float seconds;
}time;


void difference (char a){

time t1,t2;

if ( a == 0){

    scanf("%f",&t1.hours);
    scanf("%f",&t2.hours);
    if (t1.hours > t2.hours){
	printf("the difference between time is %.2f minutes ", (t1.hours - t2.hours )); fflush(stdout); }
    else {
	printf("the difference between time is %.2f minutes ", (t2.hours- t1.hours) ); fflush(stdout);
    }
}
else if ( a == 1) {

	    scanf("%f",&t1.mins);
	    scanf("%f",&t2.mins);
	    if (t1.mins > t2.mins){
		printf("the difference between time is %.2f minutes ", (t1.mins - t2.mins )); fflush(stdout); }
	    else {
		printf("the difference between time is %.2f minutes ", (t2.mins- t1.mins) ); fflush(stdout);
	    }
}
else if ( a == 2) {

    scanf("%f",&t1.seconds);
    scanf("%f",&t2.seconds);
    if (t1.seconds > t2.seconds){
	printf("the difference between time is %.2f minutes ", (t1.seconds - t2.seconds )); fflush(stdout); }
    else {
	printf("the difference between time is %.2f seconds ", (t2.seconds- t1.seconds) ); fflush(stdout);
    }

}
}
int main () {
	char type;
	do {
	printf("Choose time  0:hours  1:Minutes  2:Seconds"); fflush(stdout);
	scanf("%d",&type);
	}while((type !=0) && ( type != 1)  && ( type != 2 ));
    printf("Enter your times "); fflush(stdout);

	difference(type);





	return 0;
}
