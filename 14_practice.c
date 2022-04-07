//function to count odd numbers in an array;
#include<stdio.h>

int countodd(int arr[],int n);//function Declaration;

int main(){

int arr[]= {1,2,3,4,5,6,7,8};
printf("%d\n",countodd(arr,8));// function call
return 0;
}
int countodd(int arr[],int n){ //function defination
int count = 0;
for ( int i= 0; i < n; i++)
{
   if (arr[i]%2 != 0)
   {
       count++;
   }
}
   return count;

}