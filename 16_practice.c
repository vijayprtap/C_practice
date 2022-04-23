
//salting program adds salts to your password

#include<stdio.h>
#include<string.h>

void salting (char password[]);//function declaration

int main(){
char password[100] ;
printf("Enter password\n\n");
scanf("%s",password);
salting(password);//call
return 0;
}
void salting (char password[]){// func. defination

    char salt[] = "457";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);

}