//Pointers
#include<stdio.h>
int x=22;
int *ptr=&x;

int main(){
    //address
printf("%p\n",&x);//prints adddress of variable x.
printf("%p\n",ptr);//prints address of variable x stored in ptr.
printf("%p\n",&ptr);//prints address of ptr.
//Value
printf("%d\n",x);//prints value of variable x.
printf("%d\n",*ptr);//prints value of variable x stored in ptr.
printf("%d\n",*(&x));//prints value  of x.


return 0;
}