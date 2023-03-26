#include<stdlib.h>
#include<stdio.h>
struct myArray{
    int total_size,use_size;
    int *ptr;
};

void createArray(struct myArray *a,int tsize,int usize)
{
    a->total_size = tsize;
    a->use_size = usize;
    a->ptr=(int *)malloc(tsize * sizeof(int));
}

void getVal(struct myArray *a)
{
    int n;
    for(int i=0;i<a->use_size;i++)
    {
        printf("Enter Element::");
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}

void show(struct myArray *a)
{
    for(int i=0;i<a->use_size;i++)
    {
        printf("Element::%d\n",(a->ptr)[i]);
        
    }
}

void main()
{
    struct myArray marks;
    createArray(&marks,10,4);
    getVal(&marks);
    show(&marks);
}

