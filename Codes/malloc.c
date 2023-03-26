#include<stdlib.h>
#include<stdio.h>
void main()
{
    float *ptr;
    // ptr=malloc(6*4);
    // sice different compiler takes diffenrent bytes to store numbers;   
    // printf("SIze of INT on this PC::%d\n",sizeof(int));
    // printf("SIze of float on this PC::%d\n",sizeof(float));
    // printf("SIze of CHAR on this PC::%d\n",sizeof(char));
    
    // ptr=malloc(6 * sizeof(int));//returns void pointer
    ptr=(float *)malloc(6 * sizeof(float));

    for(int i=0;i<6;i++)
    {
        printf("\nEnter %d Element::",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0;i<6;i++)
    {
        printf(" %d Element::%f\n",i,ptr[i]);
    }
    
}