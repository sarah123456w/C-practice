#include <stdio.h>
#include <string.h>
#define LEN 30

int main() {
    char *planets[] = {"Mercury", "Venus",  "Earth",  "Mars",
                     "Jupiter",  "Saturn", "Uranus", "Neptune"};

    char arr[LEN];
    char ch;
    int j,i=0,num;
    ch=getchar();
    while(1){
        arr[i++]=ch;
        ch=getchar();
        if(ch==' '||ch=='\n'){
            arr[i]=0;
            for(j=0;j<8;j++){
                num=strncmp(arr,planets[j],i+1);
                if(num==0){
                    printf("%s is a planet.\n",planets[j]);
                    break;
                }
            }
            if(num!=0&&j==8)
                 printf("%s is NOT a planet.\n",arr);
            if(ch=='\n')
                break;
            i=0;
            ch=getchar();
        }
    }
    return 0;      
}