#include <stdio.h>

#define MAX_SIZE 1000

void find_all_sequence(int *arr, int length, int M);

int main(void) {
  int length, M;
  int arr[MAX_SIZE];

  scanf("%d %d", &length, &M);

  for (int i = 0; i < length; i++) scanf(" %d", &arr[i]);

  find_all_sequence(arr, length, M);

  return 0;
}

void find_all_sequence(int *arr, int length, int M) {
    int i=0,j=0,sum;
    int *upptr=&arr[0];
    int *downptr=&arr[0];
    
    sum=arr[0];
    while(1){
        if((i>=length)||(j>=length))//if(i>j)
            break;
        if(sum<=M){
            if(sum==M)
                printf("%d %d\n",i,j);
            j++;
            sum+=downptr[j];}
        else if(sum>M){
            sum-=upptr[i];
            i++;}
    }
}