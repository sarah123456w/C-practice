#include <stdio.h>

struct Student{
    char name[51];
    int math_score;
    int language_score;
    int data_score;
};

int main(){
    struct Student student[4];
    int i=0;
    double average[4];
    double max;
    for(i=0; i<4; i++){
        printf("Put student %d's information: ",i);
        scanf("%s %d %d %d",&(student[i].name),&(student[i].math_score),&(student[i].language_score),&(student[i].data_score));
    }
    for(i=0; i<4; i++){
        average[i]=(student[i].math_score+student[i].language_score+student[i].data_score)/(double)3;
    }
    max=average[0];
    for(i=1; i<4; i++){
        if(average[i]>=max)
            max=average[i];
    }
    for(i=0; i<4; i++){
        if(max==average[i])
            printf("%s ",student[i].name);
    }

    return 0;
}