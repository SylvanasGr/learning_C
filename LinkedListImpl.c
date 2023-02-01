#include "LinkedListImpl.h"
#include "stdio.h"

typedef struct Node {
    int value;
    _Node *next;
} _Node;


void LinkedList() {
    _Node header = {};
    addElement(&header, 100);
    addElement(&header, 500);
    addElement(&header, 800);
    addElement(&header, 1500);
//    printAllElements(&header);
//    sortElements(&header);
//    printAllElements(&header);
    sortElements(&header);

}


void printAllElements(_Node *header) {
    _Node* temp = header;
    if(temp == NULL){
        printf("Empty list!");
    }
    while (temp != NULL) {
        printf("%d\n", temp->value);
        temp = (_Node *) temp->next;
    }
}

void addElement(_Node *previous, int new_value) {
    _Node* temp = previous;
    if(temp->value == NULL){
        temp->value = new_value;
        return;
    }
    _Node* n1 = malloc(sizeof *n1);
    n1->value = new_value;
    n1->next = temp->next;
    temp->next = (_Node *) n1;
}

void removeAllElements(_Node *header){
    _Node* current = header;
    while (header != NULL){
        header = header->next;
    }
    free(current);
    //todo: free()
}

int searchElement(_Node* header,int value){\
    _Node* current = header;
    int counter =0;
    while (header != NULL){
        if(current->value == value){
            return counter;
        }
        current = (_Node *) current->next;
        counter++;
    }
    return -1;
}

void sortElements(_Node* header){
    int swapped,i;
    _Node* node1, *node2 = NULL;

    if(header == NULL){
        return;
    }

    do {
        swapped = 0;
        node1= header;

        while (node1->next != node2){
            if(node1->value > node1->next->value){
                swap(node1,node1->next);
                swapped = 1;
            }
            node1 = node1->next;
        }
        node2 = node1;
    } while (swapped);
}

void swap (_Node* node1,_Node* node2){
    int temp = node1->value;
    node1->value = node2->value;
    node2->value = temp;
}