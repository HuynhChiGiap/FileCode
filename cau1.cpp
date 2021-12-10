#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void nhapfile(int &n,FILE *nhap){
    fscanf(nhap,"%d", &n );
}
void xuatfile(int n,FILE *xuat,int value){
    fprintf(xuat,"%s","Gia tri tinh toan : ");
    fprintf(xuat,"%d",value);
}
int tinhtoan(int n){
    int dem = 0;
    int j;
    for (int  i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
           j = 1; 
        }else {
            j = -1;
        }
        dem += pow(i,2)*j;
    }
    return dem;
}
int main(){
    int n;
    FILE *nhap;
    FILE *xuat;

    if((nhap = fopen("cau1in.txt","r")) == NULL){
        printf("\nloi ! ");
        exit(1);
    }
    if((xuat = fopen("cau1out.txt","w")) == NULL){
        printf("\nloi ! ");
        exit(1);
    }
    nhapfile(n,nhap);
    printf("%d",tinhtoan(n));
    xuatfile(n,xuat,tinhtoan(n));
    fclose(nhap);
    fclose(xuat);
    return 0;
    

}