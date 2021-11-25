#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

long long decimaltobenary(long long decimal){
        int luythua,first;
        long long binary;
        binary=0;
        luythua=0;
        while (decimal > 0)
        {
            first = decimal % 2;
            if(decimal %2 == 0){
                decimal /=2;
            }else{
                decimal-=1;
                decimal/=2;
            }
            binary += first*pow(10,luythua);
            ++luythua;
        }return binary;
}
int binarytodecimal(long long binary){
    int a =0;
    int b,decimal;
    decimal=0;
    while(binary > 0){
        b = binary % 10;
        binary /= 10;
        decimal += b*pow(2,a);
        a++;
    }return decimal;
}
int dectooct(int number){
    int p = 0;
    int octnumber = 0;
    while(number > 0){
        octnumber += (number % 8) * pow(10, p);
        p++;
        number /= 8;
    }
    return octnumber;
}
int octtodec(int octal){
    int p = 0;
    int decimal =0;
    while (octal > 0)
    {
        decimal +=(octal % 10 ) * pow(8, p);
        p++;
        octal /= 10;
    }
    return decimal;
}
char inttochar(int n){
    switch (n)
    {
    case  10 :
        return 'A';
        break;
    case 11 :
        return 'B';
        break;
    case  12 :
        return 'C';
        break;
    case  13 :
        return 'D';
        break;
    case  14 :
        return 'E';
        break;
    case  15 :
        return 'F';
        break;
    default:
        return '0' + n;
        break;
    }
}
void dectothapluc(int decimal){
    char arr[40];
    int count = 0;
    while (decimal != 0)
    {
        int sd = decimal % 16;
        arr[count++] = inttochar(sd);
        decimal /= 16;
    }
    for (int i = count -1 ; i >=0; i--)
    {
        printf("%c",arr[i]);
    }
}
int chartoint(char n){
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
    default:
        return n -'0';
        break;
    }
}
void  thapluctodec(){
    long long  Decimal = 0;
    char arr[40];
    int count = 0;
    printf("\nNhap So Thap Luc Phan : ");
    fgets(arr,40,stdin);
    int length = strlen(arr) -2;
    int n = length;
    for (int i = 0; i<= n; i++)
    {
        int value = chartoint(arr[length--]);
        Decimal += value * pow(16,i);
    }
    printf("\n%ld",Decimal);
}

int main(){
    thapluctodec();

}