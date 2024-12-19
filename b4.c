#include<stdio.h>

int main(){
    int n;
    int array[n];
    printf("so phan tu cua mang: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("gia tri %d: ", i);
        scanf("%d", &array[i]);
    }
    
}