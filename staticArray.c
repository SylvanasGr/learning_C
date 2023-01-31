#include <stdio.h>
#include "data.c"

int staticArray() {

    int listA[d] = {1,2,3,4,5,6};
    int sizeOfArray = sizeOfArray(listA);
    printf("sum list: %d\n", sumOfArray(listA,sizeOfArray));
    doubleEveryElement(listA,sizeOfArray);
    printf("sum list: %d\n",sumOfArray(listA,sizeOfArray));
    changeValue(listA,85,10,&sizeOfArray);
    printf("%d\n",listA[10]); //85
    printTheList(listA,&sizeOfArray);
    return 0;
}
