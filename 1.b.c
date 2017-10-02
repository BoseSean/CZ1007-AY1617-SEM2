#include <stdio.h>
int rStrCompare(char* s1, char* s2);
int main(int argc, char const *argv[])
{
    char s1[40], s2[40];
    gets(s1);gets(s2);
    printf("%d", rStrCompare(s1, s2));
    return 0;
}
int rStrCompare(char* s1, char* s2){
    if (*s1=='\0' && *s2=='\0')
    /* missing code */
        return 0;
    // *s1=='\0' and *s2=='\0' are added for clearity, as
    //  '\0' if always less that any characters
    else if (*s1=='\0')
        return -1;
    else if (*s2=='\0')
        return 1;
    
    else if (*s1>*s2)
        return 1;
    else if (*s1<*s2)
        return -1;
    else
        return rStrCompare(s1+1, s2+1);
}