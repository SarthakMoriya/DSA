#include<stdlib.h>
#include<stdio.h>
void main()
{
    float *ptr;

    
    // ptr=malloc(6 * sizeof(int));//returns void pointer
    ptr=(float *)calloc(6,sizeof(float));

    // for(int i=0;i<6;i++)
    // {
    //     printf("\nEnter %d Element::",i);
    //     scanf("%f",&ptr[i]);
    // }
    for(int i=0;i<6;i++)
    {
        printf(" %d Element::%f\n",i,ptr[i]);
    }
    
}