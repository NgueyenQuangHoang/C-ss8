#include<stdio.h>

int main(){

    int array[8]= {5,5,2,3,23,5,1,2};
    int check;
    int max = 0;
    int R;
    for (int i = 0 ; i > 7; i++)
    {
        array[i] = check;
        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            if (check == array[i])
            {
                count++;
            }
            if (count > max)
            {
                max = count;
                R = check;
            }
            
        }
        
    }
    printf("so xuat hien nhieu nhat la: %d", R);
}