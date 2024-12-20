#include<stdio.h>

int main(){
    int arr2d[3][3]={{2,10,3},{14,52,6},{74,88,59}};
    int max = arr2d[0][0];
    int min = arr2d[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2d[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr2d[i][j] > max)
            {
                max = arr2d[i][j];
            }
            if (arr2d[i][j] < min)
            {
                min = arr2d[i][j];
            }
            
        }
        
    }
    printf("max: %d\n", max);
    printf("min: %d", min); 
}