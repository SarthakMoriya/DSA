#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next; // this can only refer to other Node Ptr
};

void linkedListTraveral(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element::%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    // link first and second node
    head->data = 7;
    head->next = second;

    // link second and third node

    second->data = 14;
    second->next = third;

    // link third and fourth

    third->data = 21;
    third->next = fourth;

    // terminate List at fourth Node
    fourth->data = 69;
    fourth->next = NULL;
    linkedListTraveral(head);
}