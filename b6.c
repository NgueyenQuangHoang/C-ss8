#include<stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 != 0)
        {
            int j = arr[i] + 2;
            arr2[i] = j;
        }
        if (arr[i] % 2 == 0)
        {
            int j = arr[i] + 3;
            arr2[i] = j;
        }
    }
    printf("{");
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", arr2[i]);
    }
    printf("}");
}