#include<stdio.h>

int main(){
    int n, m;
    printf("nhap so hang va cot: ");
    scanf("%d%d", &n,&m);
    int arr2d[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("phan tu hang %d cot %d: ",i,j);
            scanf("%d", &arr2d[i][j]);
        }
        
    }for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr2d[i][j]);
        }
        printf("\n");
    }
    
    
}