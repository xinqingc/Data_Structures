#include <stdio.h>
#include <stdlib.h>

typedef struct _listnode{
    int item;
    struct _listnode*next;
}ListNode;

int searchList(ListNode *head, int value);

int main()
{
    ListNode *head = NULL;
    ListNode *p; //used in creating linked list and traversing linked list
    ListNode *temp;
    int num;
    int value;
    int result;
    printf("Enter a list of numbers, terminated by the value -1:\n");
    scanf("%d", &num);
    while (num!=-1)
    {
        if(head==NULL)
        {
            head=malloc(sizeof(ListNode));//create storage and set head to point to it
            p=head;//head contains address of node and content is copied to , they point to same address
        }
        else
        {
            p->next=malloc(sizeof(ListNode));
            p=p->next;
        }
        p->item=num;
        scanf("%d", &num);
    }
    p->next=NULL;

    printf("Current list: ");

    p=head;//traverse from beginning
    while (p!=NULL) //for(p=head;p!=NULL;p->next)
    {
        printf("%d ", p->item);
        p = p->next;
    }
    printf("\n");

    //search value
    printf("Enter value to search for: ");
    scanf("%d", &value);
    result = searchList(head,value);
    if(result==-1)
        printf("Result not found.");
    else
        printf("Value %d found at index %d", value, result);

    //free memory
    p = head;
    while (p!= NULL)
    {
        temp=p->next;
        free(p);
        p=temp;
    }
    head = NULL;
    return 0;
}

int searchList(ListNode *head, int value)
{
    ListNode *p;
    p=head;
    int i = 0;

    while (p!=NULL) //for(p=head;p!=NULL;p->next)
    {
        if (p->item == value)
            return i;
        p = p->next;
        i++;
    }
    return -1;
}
