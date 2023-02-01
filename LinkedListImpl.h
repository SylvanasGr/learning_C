#pragma  once

#include <malloc.h>

extern void LinkedList();

typedef struct Node _Node;

extern void printAllElements(_Node *head);

extern void add(struct Node** head,int new_value);

extern void removeAllElements(_Node *head);

extern int searchElement(_Node *head, int value);

extern void deleteNode(struct Node **head_ref, int key);

extern void swap(_Node *node1, _Node *node2);

extern void sortElements(_Node* head);

extern int getSize(_Node* head);

extern void deleteNode(_Node** head_ref, int key);