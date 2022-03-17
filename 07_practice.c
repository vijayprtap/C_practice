#include<stdio.h>

int main(){
  int a;  
printf("Enter a Number \n");
scanf("%d",&a);
printf("\nprogram will return 1 if \nits a two digit no. Else 0\n");
printf("\n\n\nRESULT:%d\n\n",a>9 && a<100);
return 0;
}