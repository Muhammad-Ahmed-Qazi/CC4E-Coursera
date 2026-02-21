// You will extend the previous assignment with list_add() and list_find() and add a function called list_delete() that will find and remove the node containing the integer value if it is in the list.

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

void list_remove(lst, value)
    struct list *lst;
    int value;
{
    struct lnode *cur, *prev;
    for(cur=lst->head, prev=NULL; cur != NULL; prev=cur, cur=cur->next) {
        if (cur->value == value) {
            if (prev == NULL) {
                lst->head = cur->next;
            } else {
                prev->next = cur->next;
            }
            if (cur == lst->tail) {
                lst->tail = prev;
            }
            free(cur);
            if (lst->tail != NULL) {
                return;
            } else {
                lst->head = NULL;
                return;
            }
            return;
        }
    }
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

    list_remove(&mylist, 42);

    list_remove(&mylist, 10);
    list_dump(&mylist);

    list_remove(&mylist, 30);
    list_dump(&mylist);

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