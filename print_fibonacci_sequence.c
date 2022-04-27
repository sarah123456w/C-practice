#include <stdio.h>

int n_th_fibonacci(int n) {
    
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    
    return n_th_fibonacci(n-1)+n_th_fibonacci(n-2);
}

int main(void) {
  int num;
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) printf("%d ", n_th_fibonacci(i));

  return 0;
}