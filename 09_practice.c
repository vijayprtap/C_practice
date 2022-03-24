//A function that prints namaste or Bonjour if user is indian or French.
#include<stdio.h>
char ch;
void namaste();
void bonjour();


int main(){
printf("enter I if you are indian ,\nand F if you are french\n");
scanf("%c",&ch);
if (ch == 'i')
{
    namaste();
}else{
bonjour();
}
return 0;
}

void namaste(){
    printf("NAMASTE !!\n");
}
void bonjour(){
    printf("BONJOUR !!\n");
}