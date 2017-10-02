#include <stdio.h>
int main(int argc, char const *argv[])
{
    int ar[] ={2,7,7,12,12,18}, i;
    for(i=1; i<6; i++){
        switch(i%2){
            case 0:
                switch(ar[i]%3) {
                    case 1: ar[i]--;
                            continue;
                    case 0: ar[i]++;
                            break;
                    default: ar[i]+=2;
                }
            case 1: ar[1] =0;
        }
    }
    for (i=1; i<6;i++)
        printf("ar[%d]=%d \n", i, ar[i]);
    return 0;
}