#include <stdio.h>
#include "data.h"

int sumOfArray(const int *list,int size){
    int sum = 0;
    for(int i =0;i<size;i++){
        sum += list[i];
    }
    return sum;
}

void doubleEveryElement(int *list,int size){
    while( size>0){
        list[size] = list[size] *2;
        size--;
    }
}

void changeValue(int *list,int value,int pos,const int *size){
    if(pos>*size-1){
        printf("valid range: %d -%d, provided: %d",0,*size,pos);
    }
    list[pos] = value;
}

void printTheList(int *list,int *p){
    for(int i=0; i<*p;i++){
        printf(" %d:%d |",i,list[i]);
    }
}