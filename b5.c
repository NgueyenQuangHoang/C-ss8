#include<stdio.h>

int main(){
    int array[]={4,2,6,1,8,6,4,8,9};
    int length = sizeof(array)/sizeof(array[0]);
    int max = array[0];
    int min = array[0];
    for (int i = 0; i < length; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        if (array[i] < min)
        {
            min = array[i];
        }
        
    }
    printf("gia tri lon nhat la: %d\n", max);
    printf("gia tri nho nhat la: %d", min);
}