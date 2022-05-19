#include <stdio.h>
#include <string.h>
#define MAX1 51
#define MAX2 10001

int main(){
    char arr1[MAX1];
    char arr2[MAX2];
    int len,num;
    fgets(arr1,MAX1,stdin);
    len=strlen(arr1);
    arr1[len-1]=0;
    fgets(arr2,MAX2,stdin);
    len=strlen(arr2);
    arr2[len-1]=0;
    for(int i=0;i<=strlen(arr2)-strlen(arr1);i++){
        num=strncmp(arr1,&arr2[i],strlen(arr1));
        if(num==0)
            printf("%d %d\n",i,i+strlen(arr1)-1);
    }

    return 0;
}