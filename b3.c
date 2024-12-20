#include<stdio.h>

int main(){
    int n ; 
    printf("nhap so n: ");
    scanf("%d", &n);
    int arr2d[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("phan tu [%d][%d]: ", i,j);
            scanf("%d", &arr2d[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr2d[i][j]);
        }
        printf("\n");
    }
}