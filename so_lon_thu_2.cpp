#include<stdio.h>

void Input_arr(int arr[],int n){
    printf("\nEnter value for array :");
    for (int i = 0; i < n; i++)
    {
        printf("\nArr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}

void Output_arr(int arr[],int n){
    printf("\nValue array : ");
    for (int j = 0; j < n; j++)
    {
        printf("\t%d",arr[j]);
    }
}

int find_secondnumber(int arr[],int n){
    int first_number,second_number;
    if(arr[0]>arr[1]){
        first_number = arr[0];
        second_number = arr[1];
    }else if(arr[0]<arr[1]){
        first_number = arr[1];
        second_number = arr[0];
    }
    for (int i = 2; i < n; i++)
    {
        if(arr[i]> first_number){
            second_number = first_number;
            first_number = arr[i];
        }else if(arr[i]>second_number){
            second_number = arr[i];
        }
    }
    return second_number;
    
}

int main(){
    int arr[100];
    int n;
    do
    {
        printf("Enter the lengh for array: ");
        scanf("%d",&n);
        if (n<=0 || n>100)
        {
            printf("Error ! ");
        }
        
    } while (n<=0 || n>100);
    Input_arr(arr,n);
    Output_arr(arr,n);
    printf("\nSecond largest number : %d",find_secondnumber(arr,n));
    return 0;
    
}