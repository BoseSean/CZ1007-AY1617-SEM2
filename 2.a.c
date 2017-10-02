#include <stdio.h>
void fun(int* ar, int size, int i, int *pk);
int main(int argc, char const *argv[])
{
    int ar[10]={2,4,6,8,10,9,7,5,3,1}, n=0;
    fun(ar,10,0,&n);
    printf("Result: %d\n", n);
    return 0;
}
void fun(int* ar, int size, int i, int *pk){
    if (i<size) {
        if (ar[i]>ar[*pk]){
            *pk=i;
            printf("ar[%d]: %d\n", *pk, ar[*pk]);
        }
        fun(ar,size,i+1,pk);
    }
}