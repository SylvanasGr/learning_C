#define sizeOfArray(x) (sizeof(x)/ sizeof((x)[0]))
#define defSize 20
extern int sumOfArray(const int *list,int size);
extern void doubleEveryElement(int *list,int size);
extern void changeValue(int *list,int value,int pos,const int *size);