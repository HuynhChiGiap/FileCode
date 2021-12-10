#include<stdio.h>
#include<stdlib.h>
#define MAX 30

void nhapmang(int arr[][MAX],int &n,FILE *nhap){
    fscanf(nhap,"%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fscanf(nhap,"%d",&arr[i][j]);
        }
    }
}
void xuatfile(int arr[][MAX],int n,FILE *xuat,int max,int tongcheo){
    fprintf(xuat,"%s%5d*%d\n\n","Thao Tac Voi Mang Co Kinh Thuoc : ",n,n);
    fprintf(xuat,"%s%5d","So Lon Nhat Trong Mang : ",max);
    fputs("\n",xuat);
    fprintf(xuat,"%s%5d","Tong Duong Cheo Chinh : ",tongcheo);
}

int maxarr(int arr[][MAX],int n){
    int max =arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            
        }
    }
    return max;
}
int tongcheo(int arr[][MAX],int n){
    int tong= 0;
    for (int i = 0; i < n; i++)
    {
        tong+=arr[i][i];
    }
    return tong;
}

int main(){
    int n;
    int arr[MAX][MAX];
    FILE *nhap;
    FILE *xuat;
    if ((nhap = fopen("input.txt","r"))== NULL)
    {
        printf("\nLoi  ! ");
        exit(1);
    }
    nhapmang(arr,n,nhap);
    fclose(nhap);
    if ((xuat = fopen("output.txt","w")) == NULL)
    {
        printf("\nLoi  ! ");
        exit(1);
    }
    xuatfile(arr,n,xuat,maxarr(arr,n),tongcheo(arr,n));
    fclose(xuat);
    
    
    
}