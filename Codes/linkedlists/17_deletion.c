#include <stdlib.h>
#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversalList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next; // ptr=third->next=NULL loop exits
    }
}

struct Node *deleteFirstNode(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *ptr = head;
    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    struct Node *q = ptr->next;
    ptr->next = q->next;
    free(q); // Qth node is Index wali Node
    return head;
}
//CASE 3: Delete at End
struct Node *deleteAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

//CASE 4:Delete element with guven value from linked List;

struct Node * deleteAtValue(struct Node *head ,int value)
{
    struct Node *p=head;
    struct Node *q = head->next;
    while(q->data != value && q->next != NULL)
    {
        p=p->next;
        q = q->next;
    }

    if(q->data == value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}

void main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    second->data = 14;
    third->data = 21;

    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("Before Deletion\n");
    traversalList(head);
    printf("After Deletion\n");
    // head = deleteFirstNode(head);
    // head = deleteAtIndex(head,2);
    // head = deleteAtEnd(head);
    head = deleteAtValue(head,14);

    traversalList(head);
}