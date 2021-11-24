#include<stdio.h>
#include<math.h>
#include<string.h>

int CharToInt(char n){
    switch (n)
    {
    case 'A':
        return 10;
        break;
    case 'B':
        return 11;
        break;
    case 'C':
        return 12;
        break;
    case 'D':
        return 13;
        break;
    case 'E':
        return 14;
        break;
    case 'F':
        return 15;
        break;
    case 'G':
        return 16;
        break;
    default:
        return n -'0';
        break;
    }
}
void  ThapLucToDec(){
    int Decimal = 0;
    char arr[40];
    int count = 0;
    printf("\nNhap So Thap Luc Phan : ");
    fgets(arr,40,stdin);
    int length = strlen(arr) -2;
    int n = length;
    for (int i = 0; i<= n; i++)
    {
        int value = CharToInt(arr[length]);
        Decimal += value * pow(16,i);
    }
    printf("\n%d",Decimal);
}

int main(){
    ThapLucToDec();
}