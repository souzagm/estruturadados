#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct _snode Snode;
typedef struct _slinked_list LinkedList;

SNode *Snode_create(int val);


void print_LL(LinkedList *L);
void add_last(LinkedList *L, int val);
void add_first(LinkedList *L, int val);
LinkedList *LinkedList_create();



#endif