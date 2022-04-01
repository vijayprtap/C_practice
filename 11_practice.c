//factorial of n using recursions.

#include<stdio.h>
int fact(int n);//function declaration

int main(){
printf("fact is %d",fact(5));


return 0;
}//recursive function
int fact(int n){
    if (n==0)
    {
        return 1;
    }
    
    int factNm1= fact(n-1);
    int factn=factNm1*n;
    return factn;
}