#include<stdio.h>

int main(){
    char a;
    printf("\nEnter a charecter\n");
    scanf("%c",&a);
//65-90 uppercase in ASCII
if (a<=90 && a<=65)
{
    printf("\nUPPERCASE\n");
}
else
{
    printf("\nlowercase\n");
}

return 0;
}