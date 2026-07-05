#include<stdio.h>

void main(){
    int num1[] = {1, 4, 2, 3};
    int num2[] = {2, 5, 1, 6};

    // 1+2 1+5 1+1 1+3 

    int ans[16];

    int size = 4;

    int in = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            ans[in++] = num1[i] + num2[j];
        }
    }
    
}