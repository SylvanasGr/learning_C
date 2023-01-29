#include <stdio.h>
#include <stdlib.h>
#include "data.h"
int *array;
int dynamicAllocatedArray() {
    array = calloc(defSize, sizeof(int));
    array[10] = 100;
    array = realloc(array,defSize*800*sizeof(int ));
    array[15000] = 100;
    printf("%d\n", array[10]);
    free(array);
    return 0;
}
