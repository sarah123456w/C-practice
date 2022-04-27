#include <stdio.h>

#define ARR_SIZE 10

void find_two_largest(int a[], int* largest_ptr, int* second_largest_ptr);

int main(void) {
  int arr[ARR_SIZE];
  int largest, second_largest;

  printf("Enter elements in the array: ");
  for (int i = 0; i < ARR_SIZE; i++) {
    scanf("%d", &arr[i]);
  }

  find_two_largest(arr, &largest, &second_largest);

  printf("First largest = %d\n", largest);
  printf("Second largest = %d", second_largest);

  return 0;
}

void find_two_largest(int arr[], int* largest_ptr, int* second_largest_ptr) {
  
    int max=arr[0];
    int secondmax=arr[0];
    int n=0,i=0;

    for(i=0;i<10;i++){//최대값 찾기
        if(arr[i]>max){
            max=arr[i];
            n=i;
        }
    }
    *largest_ptr=max;

    for(i=0;i<10;i++){//같은 최대값 2개인 경우
        if(i!=n)
            if(arr[i]==max)
                *second_largest_ptr=max;  
    }

    for(i=0;i<10;i++){// 다른 경우
        if(i!=n)
            if(arr[i]>secondmax){
                secondmax=arr[i];
                *second_largest_ptr=secondmax;
            }
    }
    

}