#include <stdio.h>
#include <stdlib.h>

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

    // void create(node *p);
    // void display(node *p);

    head = (node *)malloc(sizeof(node));

    create(head);
    printf("\nThe Linked List is->: ");

    display(head);

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
        printf(" %d -> ", list->item);

        if (list->next->next == NULL)
            printf("%d", list->next->item);

        display(list->next);
    }
    return;
}
