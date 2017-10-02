#include <stdio.h>
// #include <stdlib.h>
char* connect(char* s1, char* s2);
int main(int argc, char const *argv[]) {
    char *s,s1[80], s2[80];
    gets(s1);gets(s2);
    s = connect(s1,s2);
    printf("%s %s %s\n", s1, s2, s);
    malloc(1);
    return 0;
}
char* connect(char* s1, char* s2) {
    char *s,*p,*q;
    int len1=0, len2=0;
    /* missing code */
    p=s1; q=s2;
    // get length of s1 and s2
    while(*p!='\0'){
        p++;
        len1++;
    }
    while(*q!='\0'){
        q++;
        len2++;
    }
    // malloc block of memory for new string 
    s = malloc((len1+len2+1)*sizeof(char));
    // cpoying s1 and s2
    while(*s1!='\0'){
        *(s++)=*(s1++);
    }
    while(*s2!='\0'){
        *(s++)=*(s2++);
    }
    // append a '\0' at the end of s
    *s='\0';
    // return the pointer to the first character of the string
    return s-(len1+len2);
}