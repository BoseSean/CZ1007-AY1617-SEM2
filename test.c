#include <stdio.h>
char* a(int size){
    char* s = malloc(sizeof(char)*10);
    s[0]='a';
    return s;
}
int main(int argc, char const *argv[])
{
    printf("%s\n", a(10));
    return 0;
}
