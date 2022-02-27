//random no. generator.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number= rand()%300+1;
    printf("the random number is %d \n", number);
return 0;
}