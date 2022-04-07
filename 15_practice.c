//function to reverse an array
#include<stdio.h>

void Rev_arr (int arr[], int n);//func declaration

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print_arr(arr,10);//function call;

    Rev_arr(arr,10);//function call;

    print_arr(arr,10);//function call;
    
return 0;
}
void Rev_arr(int arr[],int n){    //function defination;
    for ( int i = 0; i < n/2; i++)
    {
     int firstVal =arr[i];
     int secondVal = arr[n-i-1];
     arr[i] = secondVal;
     arr[n-i-1] = firstVal;
    
    }
    
}
int print_arr(int arr[],int n){    //function defination;
    for ( int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
   printf("\n"); 
}