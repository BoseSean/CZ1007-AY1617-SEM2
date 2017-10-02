#include <stdio.h>
void input(char* p); 
float avg(char* p);
int sentence(char* p);
int word(char* p);
int main(){
    char str[200];
    printf("Enter a paragraph of text: \n");
    input(str);
    printf("Average word/sentence: %.2f\n", avg(str));    
    return 0;
}

void input(char* p) {
    /* missing code (i) */
    gets(p);
    printf("%s\n", p);
} 
float avg(char *p) {
    float average;
    /* missing code (ii) */
    average=(float)word(p)/(float)sentence(p);
    return average;
}
int word(char* p) {
    int num=0, temp;
    /* missing code (iii) */
    // only need to count spaces, as each word must also seperated by a space.
    while(*p!='\0'){
        if(*p==' ')
            num++;
        p++;
    }
    num++; // the last word does not have a space behind
    printf("Word count: %d\n", num);
    return num;
}
int sentence(char* p) {
    int num=0;
    /* missing code (iv) */
    // only need to count '.', as each sentence must be seperated by a '.'.
    while(*p!='\0'){
        if(*p=='.')
            num++;
        p++;
    }
    printf("Sentence count: %d\n", num);
    return num;
}
