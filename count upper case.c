#include <stdio.h>

int main(void)
{
    int ch;
    int n=0;
    ch=getchar();

    while(ch !='\n'){

        if((ch>=65)&&(ch<=90))
            n++;
        ch=getchar();
    }

    printf("%d",n);
    return 0;
}