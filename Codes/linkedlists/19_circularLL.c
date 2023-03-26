#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *circularTraversal(struct Node *head)
{
    struct Node *ptr = head;

    printf("Element::%d\n", ptr->data);
    ptr = ptr->next;

    while (ptr != head)
    {
        printf("Element::%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node *p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;


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
    second->next = third;
    third->next = head;

    circularTraversal(head);
    head=insertAtFirst(head,23);
    printf("After Inseetion at First Node::\n");
    circularTraversal(head);
}