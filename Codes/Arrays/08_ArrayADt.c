#include <stdlib.h>
#include <stdio.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray *a, int tsize, int Usize)
{
    // (*a).total_size=tsize;
    // (*a).used_size=Usize;
    // (*a).ptr=(int *)malloc(tsize * sizeof(int));
    //               SAME
    a->total_size = tsize;
    a->used_size = Usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
        printf("%d\n", (a->ptr)[i]);
}

void getVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter Elements::\n");
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    getVal(&marks);
    show(&marks);
}
