#include<stdio.h>

int main(){
    int array[5]={1,3,5,7,9};
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (array[i]%2==0)
        {
            printf("%d ", array[i]);
            count++;
        }
        
    }if (count == 0)
    {
        printf("mang khong co so chan");
    }
    
    
}