#include <stdio.h>

#define MAX_STR_ARR_LENGTH 5
#define MAX_STR_LENGTH 1024

int string_length(char str[]) {
  int length = 0;
  for (int i = 0; str[i] != '\0'; i++) length++;
  return length;
}

void print_longest_string(char str_arr[][MAX_STR_LENGTH]) {
    
    int max=string_length(str_arr[0]);
    int i,top,n;
    for(i=0; i < MAX_STR_ARR_LENGTH; i++) 
    {    
        if(string_length(str_arr[i])>=max){
            max=string_length(str_arr[i]);
            top=i;
        }
    }

    for(i=0; i < MAX_STR_ARR_LENGTH; i++) 
        if(string_length(str_arr[i])==string_length(str_arr[top]))
            printf("%s\n",str_arr[i]);
    

}

int main(void) {
  int length = 0;
  char str_arr[MAX_STR_ARR_LENGTH][MAX_STR_LENGTH];

  for (int i = 0; i < MAX_STR_ARR_LENGTH; i++) {
    scanf("%s", str_arr[i]);
  }

  print_longest_string(str_arr);
  return 0;
}
