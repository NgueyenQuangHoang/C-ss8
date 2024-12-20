#include<stdio.h>

int main(){
    int arr2d[4][4]={{2,10,3,4},{14,52,6,7},{74,88,59,10},{1,2,3,4}};
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i + j==3)
            {
                printf("%d\t", arr2d[i][j]);
                sum += arr2d[i][j];
            }else{
                printf("\t");
            }
        }
        printf("\n\n\n");
    }
    printf("tong duong cheo phu la: %d", sum);
    return 0;
}