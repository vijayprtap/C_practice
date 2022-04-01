#include<stdio.h>
int i=4;
int *ptr=&i;
int **pptr =&ptr;
int main(){
printf("value of I is ; %d",**pptr);

return 0;
}