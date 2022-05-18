#include <stdio.h>

#define MAX 51

int* pascal_n(int n) {
    int prev_arr[MAX];  
    int cur_arr[MAX];
    int *cur_ptr=cur_arr;
    int *pre_ptr;
    int k=0;
    cur_arr[k]=1;
    k++;
    if(n==1){
        cur_arr[0]=1;
        printf("1\n");
        return cur_ptr;
    }
    else {
        pre_ptr=pascal_n(n-1);
        for(int i=0;i<n-2;i++){
            cur_ptr[i+1]=pre_ptr[i]+pre_ptr[i+1];
            k++;
        }
    }
    cur_arr[k]=1;
    for(int j=0;j<=k;j++)
        printf("%d ",cur_arr[j]); 
    printf("\n");
    return cur_ptr;
}

int main() {
  int n;

  scanf("%d", &n);
  pascal_n(n);

  return 0;
}