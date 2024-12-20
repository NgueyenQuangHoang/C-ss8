#include<stdio.h>

int main(){
    int arr2d[3][3]={{2,10,3},{14,52,6},{74,88,59}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr2d[i][j]);
        }
        printf("\n\n\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i ==0 || i == 2 || j == 0 || j == 2)
            {
                sum += arr2d[i][j];
            }
        }
        
    }
    printf("tong bien la: %d", sum);
}