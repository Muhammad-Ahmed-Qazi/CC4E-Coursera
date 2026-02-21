// You will write a function list_add() to append an integer to the end of a linked list. You will also write a function called list_find() that will return the list node containing the integer value or NULL if the value is not in the list.

#include <stdio.h>
#include <stdlib.h>

void list_add(lst, value)
    struct list *lst;
    int value;
{
    struct lnode *newnode;
    newnode = (struct lnode *)malloc(sizeof(struct lnode));
    newnode->value = value;
    newnode->next = NULL;
    if (lst->head == NULL) {
        lst->head = newnode;
    } else {
        lst->tail->next = newnode;
    }
    lst->tail = newnode;
}


struct lnode * list_find(lst, value)
    struct list *lst;
    int value;
{
    struct lnode *cur;
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        if (cur->value == value) {
            return cur;
        }
    }
    return NULL;
}

struct lnode {
    int value;
    struct lnode *next;
};

struct list {
  struct lnode *head;
  struct lnode *tail;
};

int main()
{
    void list_add();
    void list_dump();
    struct lnode * list_find();

    struct list mylist;
    struct lnode * mynode;

    mylist.head = NULL;
    mylist.tail = NULL;

    list_add(&mylist, 10);
    list_add(&mylist, 20);
    list_add(&mylist, 30);
    list_dump(&mylist);

    mynode = list_find(&mylist, 42);
    if ( mynode == NULL ) {
        printf("Did not find 42\n");
    } else {
        printf("Looked for 42, found %d\n", mynode->value);
    }

    mynode = list_find(&mylist, 30);
    if ( mynode == NULL || mynode->value != 30) {
        printf("Did not find 30\n");
    } else {
        printf("Found 30\n");
    }

    list_add(&mylist, 40);
    list_dump(&mylist);

}

void list_dump(lst)
    struct list *lst;
{
    struct lnode *cur;
    printf("\nDump:\n");
    for(cur=lst->head; cur != NULL; cur=cur->next) {
        printf("  %d\n", cur->value);
    }
}