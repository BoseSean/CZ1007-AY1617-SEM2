#include <stdio.h>
void rConvert(char* str, int num);
int main(){
    int num;
    char str[50];
    scanf("%d", &num);
    rConvert(str, num);
    puts(str);
    return 0;
}
void rConvert(char* str, int num){
    if ( (num/10)<=0 ) {
        /* missing code (i) */
        *str = num + '0';
        *(++str) = '\0';
    }
    else {
        /* missing code (ii) */
        *str = num%10 + '0';
        rConvert(str+1, num/10);
    }
}