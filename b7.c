#include<stdio.h>

int main(){
    int n;
    int arr[n];
    scanf("%d", &n);
    int index;
    for (int i = 0; i < n; i++)
    {
        do
        {
            printf("phan tu thu %d: ",i);
            scanf("%d", &index);
            arr[i] = index;
        } while (index % 2 == 0);
        
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}