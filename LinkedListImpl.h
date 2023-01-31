#pragma  once

#include <malloc.h>

extern void LinkedList();

typedef struct Node _Node;

extern void printAllElements(_Node *header);

extern void addElement(_Node *previous, int new_value);

extern void removeAllElements(_Node *header);

extern int searchElement(_Node *header, int value);

extern void deleteNode(struct Node **head_ref, int key);

extern void swap(_Node *node1, _Node *node2);

extern void sortElements(_Node* header);