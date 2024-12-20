#include<stdio.h>

int main(){
    int array[5]={1,3,5,7,9};
    int check ;
    printf("nhap so can kiem tra: ");
    scanf("%d", &check);
    for (int i = 0; i < 5; i++)
    {
        if (check == array[i])
        {
            printf("so %d co trong mang, vi tri %d", check, i);
            break;
        }
        
    }
}