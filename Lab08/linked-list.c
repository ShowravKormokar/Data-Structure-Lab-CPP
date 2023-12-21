#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define NULL 0

struct linked_list
{
    int item;
    struct linked_list *next;
};
typedef struct linked_list node;

int main()
{
    node *head;

    void create(node * p);
    void display(node * p);

    node *insert(node * p);
    node *deletion(node * p);

    head = (node *)malloc(sizeof(node));

    create(head);
    display(head);

    *insert(head);
    *deletion(head);

    printf("\n");
}

void create(node *list)
{
    printf("Input a number\n");
    printf("type -1 at end: ");
    scanf("%d", &list->item);

    if (list->item == -1)
    {
        list->next = NULL;
    }
    else
    {
        list->next = (node *)malloc(sizeof(node));
        create(list->next);
    }
    return;
}

void display(node *list)
{
    if (list->next != NULL)
    {
        printf("%d-> ", list->item);

        if (list->next->next == NULL)
            printf("%d", list->next->item);

        display(list->next);
    }
    return;
}

node *insert(node *head)

{
    node *find(node * p, int a);
    node *neww;
    node *n1;
    int key;
    int x;

    printf("\nValue of new item? ");
    scanf("%d", &x);
    printf("\nValue of key item? ");
    scanf("%d", &key);
    // printf("%d",head->item);
    if (head->item == key)
    {
        neww = (node *)malloc(sizeof(node));
        neww->item = x;
        neww->next = head;
        head = neww;
    }
    else
    {
        n1 = find(head, key);

        if (n1 == NULL)
            printf("\n key is not found ");

        else
        {
            neww = (node *)malloc(sizeof(node));

            neww->item = x;
            neww->next = n1->next;
            n1->next = neww;
        }
    }
    display(head);
    //*deletion(head);
    return (head);
}

node *find(node *list, int key)
{

    if (list->next->item == key)
        return (list);

    else if (list->next->next == 0)
        return (NULL);

    else

        find(list->next, key);
}

node *deletion(node *head)
{
    node *find(node * p, int a);
    int key;
    node *n1;
    node *p;
    printf("\n which item you want to delete? ");
    scanf("%d", &key);

    if (head->item == key)
    {
        p = head->next;
        free(head);
        head = p;
    }
    else
    {

        n1 = find(head, key);

        if (n1 == NULL)
            printf("\nKey not found!");

        else
        {
            p = n1->next->next;

            free(n1->next);

            n1->next = p;
        }
    }
    display(head);

    return head;
}
