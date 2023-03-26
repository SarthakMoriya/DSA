#include <conio.h>
#include <stdio.h>
struct Node
{
    int data;
    struct Node *next, *prev;

};
void traversal(struct Node *pPrev)
{
    while(pPrev != NULL)
    {
        printf("Element::%d \n", pPrev->data);
        pPrev=pPrev->prev;
    }
}
void main()
{
    struct Node *head, *second, *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = second;
    head->prev=NULL;
    
    second->next = third;
    second->prev =head;

    third->next = NULL;
    third->prev = second;

    traversal(third);
}