#include <stdio.h>
int main()
{
    int dong;
    printf("\nNhap so dong : ");
    scanf("%d", &dong);
    for (int i = 1; i <= dong; i++)
    {
        for ( int p=1;p <=dong -i;p++)
        {
            printf("  ");
        }
        for(int q = dong-i+1;q<=dong;q++){
            printf("%d ",q);
        }
        for (int k = dong -1 ; k>dong-i; k--)
        {
            printf("%d ",k);
        }
        
        printf("\n");
    }
    
    
    return 0;
}