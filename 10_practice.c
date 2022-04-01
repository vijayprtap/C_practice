//print sum of n numbers using recursion
#include<stdio.h>
int sum(int n);//function declaration

int main(){
printf("sum is %d",sum(10));


return 0;
}//recursive function
int sum(int n){
    if (n==1)
    {
        return 1;
    }
    
    int sumNm1= sum(n-1);
    int sumn=sumNm1+n;
    return sumn;
}