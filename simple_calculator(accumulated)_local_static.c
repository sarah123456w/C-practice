#include <stdio.h>

int calculate(char operator, float num) {
  static float result;
  static int add_cnt, sub_cnt, mul_cnt, div_cnt;

    if(operator=='+'){
        result += num;
        printf("%.2f\n",result);
        add_cnt++;
    }
    else if(operator=='-'){
        result -= num;
        printf("%.2f\n",result);
        sub_cnt++;
    }
    else if(operator=='*'){
        result *= num;
        printf("%.2f\n",result);
        mul_cnt++;
    }
    else if(operator=='/'){
        result /= num;
        printf("%.2f\n",result);
        div_cnt++;
    }
    else if(operator=='q'){
            printf("add: %d, sub: %d, mul: %d, div: %d",add_cnt, sub_cnt, mul_cnt, div_cnt);
            return 0;
    }
    else{
        printf("Invalid operator\n");
        return 1;
    }
}

int main(void) {
  char operator;
  int flag;
  float num;

  while (1) {
    scanf(" %c %f", &operator, & num);
    flag = calculate(operator, num);
    if (flag == 0) break;
  }
}