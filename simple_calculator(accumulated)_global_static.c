#include <stdio.h>

static float result;

void add(float num) {
  result += num;
}

void sub(float num) {
  result -= num;
}

void mul(float num) {
    result *= num;
}

void div(float num) {
    result /= num;
}

int main(void) {
  char operator;
  float num;

  while (1) {
    scanf(" %c %f", &operator, & num);
    if(operator=='+')
    {
        add(num);
        printf("%.2f\n",result);
    }
    else if(operator=='-')
    {
        sub(num);
        printf("%.2f\n",result);
    }
    else if(operator=='*')
    {
        mul(num);
        printf("%.2f\n",result);
    }
    else if(operator=='/')
    {
        div(num);
        printf("%.2f\n",result);
    }
    else if(operator=='q')
        break;
    else
        printf("Invalid operator\n");
 }
}