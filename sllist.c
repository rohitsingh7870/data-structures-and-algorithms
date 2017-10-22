// Implementation of singly linked list.
// Coded on 17-09-2017 by Shashank Shekhar.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct sllnode
{
    int val;
    struct sllnode* next;
}sllnode;

sllnode* create(int val)
{
    sllnode* head = malloc(sizeof(sllnode));
    if (head == NULL)
    {
        return NULL;
    }
    head->val = val;
    head->next = NULL;
    return head;
}

bool find(sllnode* head, int val)
{
    sllnode* trav = head;
    while (trav != NULL)
    {
        if (trav->val == val)
        {
            return true;
        }
        trav = trav->next;
    }
    return false;
}

sllnode* insert(sllnode* head, int val)
{
    // sllnode* new = malloc(sizeof(sllnode));
    // if (new == NULL)
    // {
    //     return NULL;
    // }
    // new->val = val;
    /*Alternate line of code for 6 lines writen above.*/
    sllnode* new = create(val);
    new->next = head;
    return new;
}

void insert2(sllnode **head, int val) // pointer to address of head. head is passed by reference
{
    sllnode* new = malloc(sizeof(sllnode));
    if (new == NULL)
    {
        return;
    }
    new->val = val;
    new->next = *head;
    *head = new;
}

void insert_sorted(sllnode **head, sllnode* loc, int val)
{
    // sllnode* temp = loc;
    sllnode* new = malloc(sizeof(sllnode));
    new->val = val;
    new->next = loc;
}

void destroy(sllnode* head)
{
    if (head == NULL)
    {
        return;
    }
    destroy(head->next);
    free(head);
}

void show(sllnode* head)
{
    sllnode* trav = head;
    while (trav != NULL)
    {
        printf("%d", trav->val);
        printf(" ");
        trav = trav->next;
    }
    printf("\n");
}

sllnode* locate(sllnode* head ,int val)
{
    sllnode* trav = head;
    while (trav->val < val)
    {
        trav = trav->next;
    }
    return trav;
}


int main(void)
{
    // sllnode* list = create(4);
    // bool exists = find(list, 4);
    // printf(exists ? "true\n" : "false\n");
    // printf("%d\n", list->val);
    // sllnode* list2 = insert(list, 6);
    // printf("%d\n", list2->val);
    // show(list2);

    int n, x;
    sllnode* new_list = create(5); // returns head to list named new_list.
    printf("How many no. you wanna insert in list\n");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("insert: ");
        scanf("%d", &x);
        insert2(&new_list, x);
    }

    show(new_list);
    sllnode* loc = locate(new_list, 4);
    // printf("%p\n", loc);
    insert_sorted(&new_list, loc, 4);
    show(new_list);

    // printf("Now do you really wanna search in list...\n");
    // printf("Enter the elements to be searched: ");
    // scanf("%d", &x);
    // bool exists = find(new_list, x);
    // printf(exists ? "found\n" : "Not found\n");

    return 0;
}
