#include <stdio.h>

int main(void)
{
    int ch;
    int n1=0;
    ch=getchar();
    while(ch != '\n')//48~57 65~70 16진법 한 자리 수를 2진법 4자리 수로 바꿈 switch문 활용
    {
        switch(ch)
        {
        case 48:
            printf("0000");
            break;
        case 49:
            printf("0001");
            break;
        case 50:
            printf("0010");
            break;
        case 51:
            printf("0011");
            break;
        case 52:
            printf("0100");
            break;
        case 53:
            printf("0101");
            break;
        case 54:
            printf("0110");
            break;
        case 55:
            printf("0111");
            break;
        case 56:
            printf("1000");
            break;
        case 57:
            printf("1001");
            break;
        case 65:
            printf("1010");
            break;
        case 66:
            printf("1011");
            break;
        case 67:
            printf("1100");
            break;
        case 68:
            printf("1101");
            break;
        case 69:
            printf("1110");
            break;
        case 70:
            printf("1111");
            break;
        default:
            printf("\nInvalid input error");
            n1++;
        }

        if(n1==1)
            break;
        ch=getchar();
    }

     return 0;   
}