#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 30

struct sinhvien
{
    char ho_ten[MAX];
    int tuoi;
    float diemtb;
};

typedef sinhvien SV;

void nhap(SV &sv){
    printf("\nNhap ho va ten : "); fflush(stdin); gets(sv.ho_ten);
    printf("\nNhap tuoi : "); scanf("%d",&sv.tuoi);
    printf("\nNhap diem trung binh : "); scanf("%f",&sv.diemtb);
}
void nhapdulieu(SV arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("\n_____________________________________\n");

        printf("\nNhap thong tin hoc sinh thu '%d' ",i+1);
        nhap(arr[i]);
        printf("\n_____________________________________\n");
    
    }
}
void xuat(SV sv){
    printf("%20s%20d%20f",sv.ho_ten,sv.tuoi,sv.diemtb);
}

void xuatdulieu(SV arr[],int n){
    printf("\n_______________________________________________________________\n");
    printf("%s%20s%20s%20s","STT","Ho Ten","Tuoi","Diem TB");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d",i+1); xuat(arr[i]);
    }
    printf("\n_______________________________________________________________\n");
    

}

int main(){
    int n = 5;
    SV arr[MAX];
    nhapdulieu(arr,n);
    xuatdulieu(arr,n);
    

}