#include<stdio.h>

int main(){
float a,b,c,d;
printf("\nenter four numbers\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
if (a>b && a>c && a>d)
{
    printf("A is the biggest number %f",a);
}
else if(b>a && b>c && b>d)
{
    printf("B is the biggest no. %f",b);
}
else if(c>a && c>b && c>d)
{
     printf("c is the biggest no.%f",c);
}
else
{
    printf("D is the biggest no.%f",d);
}




return 0;
}