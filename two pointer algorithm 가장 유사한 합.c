#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 1000
#define INF 1e+9

void find_nearest_two_sum(int *arr, int length, int M);

int main(void) {
  int length, M;
  int arr[MAX_SIZE];

  scanf("%d %d", &length, &M);

  for (int i = 0; i < length; i++) scanf(" %d", &arr[i]);

  find_nearest_two_sum(arr, length, M);

  return 0;
}

void find_nearest_two_sum(int *arr, int length, int M) {
    int *lptr=arr;
    int *rptr=arr;
    int j=length-1,i=0;
    int mi,mj,sum=0;
    int min=arr[0]+arr[length-1];

    while(i < j){
        sum=(lptr[i]+rptr[j]);

        if(abs(sum) <= abs(min)){
            min=sum;
            mj=j;
            mi=i;
        }
        if(sum<M){
            i++;
        }
        else if(sum>M){
            j--;
        }
        else if(sum==M){
            mi=i;
            mj=j;
            break;
        }
    }
    printf("%d %d",lptr[mi],rptr[mj]);

}