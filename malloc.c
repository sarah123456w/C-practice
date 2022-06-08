#include <stdio.h>
#include <stdlib.h>

struct Word
{
    char* spelling;
    char* mean;
};

int main(){
    int len,i,format;
    struct Word * vocabulary;
    scanf("%d",&len);
    getchar();
    vocabulary=malloc(len*sizeof(struct Word));
    for(i=0; i<len; i++){
        (vocabulary+i)->spelling=malloc(sizeof(char)*101);//fgets 개행문자 때문에 101
        fgets((vocabulary+i)->spelling,101,stdin);
        (vocabulary+i)->mean=malloc(sizeof(char)*101);
        fgets((vocabulary+i)->mean,101,stdin);
    }
    printf("Select the output format(1, 2, or 3): ");
    scanf("%d",&format);
    switch(format){
        case 1: for(i=0; i<len; i++){
                    printf("%s",(vocabulary+i)->spelling);
                    printf("%s",(vocabulary+i)->mean);
                    free((vocabulary+i)->spelling);
                    free((vocabulary+i)->mean);
                }
                break;
        case 2: for(i=0; i<len; i++){
                    printf("%s",(vocabulary+i)->spelling);
                    free((vocabulary+i)->spelling);
                    free((vocabulary+i)->mean);
                }
                break;
        case 3: for(i=0; i<len; i++){
                    printf("%s",(vocabulary+i)->mean);
                    free((vocabulary+i)->spelling);
                    free((vocabulary+i)->mean);
                }       
    }
    free(vocabulary);
    return 0;
}