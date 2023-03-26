#include<stdlib.h>
#include<stdio.h>
void main()
{
    float *ptr;
    ptr=(float *)malloc(5 * sizeof(float));
    // for(int i=0;i<5;i++)
    // {
    //     scanf("%f",&ptr[i]);
    // }
    for(int i=0;i<5;i++)
    {
        printf("%f",ptr[i]);
    }
}