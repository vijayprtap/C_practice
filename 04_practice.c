//program to display the cube of any given no.
#include<stdio.h>

int main(){
int i,b;
printf("enter any no.");
scanf("%d",&b);
for (i=1; i <= b; i++)
{
    printf("the cube of the number %d is %d.\n ",i,(i*i*i));
}

return 0;
}