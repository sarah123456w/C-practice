#include <stdio.h>

#define MAX_STRING_LENGTH 1024

void check_palindrome(char str[], int length) {
    
    int i,n=0;
    for(i=0; i<length; i++)
    {
        if(str[i]!=str[length-i-1])
        {   
            n++;
            break;
        }
    }

    if(n>0)
        printf("%s is not a palindrome.",str);
    else
        printf("%s is a palindrome.",str);
}

int main(void) {
  int length = 0;
  char str[MAX_STRING_LENGTH];

  scanf("%s", str);

  for (int i = 0; str[i] != '\0'; i++) length++;

  check_palindrome(str, length);
  return 0;
}