#include<stdio.h>

int main(){
    int array[] = {1,2,3,4,5};
    int length = sizeof(array)/sizeof(array[0]);
    for (int index = 0; index < length ; index++)
    {
        printf("%d ", array[index]);
    }printf("\n");
    printf("do dai cua mang la: %d", length);
    
}