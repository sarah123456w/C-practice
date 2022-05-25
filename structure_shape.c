#include <stdio.h>
#define MAX 100

struct Point{
    int x1;
    int y1;
    int x2;
    int y2;
};
enum _shape {LINE=1, RECT=2};

struct Figure{
    enum _shape shape;
    struct Point point;
};

int main(){
    struct Figure figure[MAX];
    int i=0,j=0,sh;

    for(i=0; i<MAX; i++){
        printf("Put figure shape (1: LINE, 2: RECT, 0: PRINT): ");
        scanf("%d",&sh);
        if(sh==0){
            for(j=0; j<=i; j++){
                if(figure[j].shape==LINE){
                    if(figure[j].point.x1==figure[j].point.x2&&figure[j].point.y1==figure[j].point.y2)
                        printf("Figure %d: Invalid points\n",j+1);
                    else
                        printf("Figure %d: a line from (%d, %d) to (%d, %d)\n",j+1,figure[j].point.x1,figure[j].point.y1,figure[j].point.x2,figure[j].point.y2);
                }
                else if(figure[j].shape==RECT){
                    if(figure[j].point.x1==figure[j].point.x2||figure[j].point.y1==figure[j].point.y2)
                        printf("Figure %d: Invalid points\n",j+1);
                    else
                        printf("Figure %d: a rectangle from (%d, %d) to (%d, %d)\n",j+1,figure[j].point.x1,figure[j].point.y1,figure[j].point.x2,figure[j].point.y2);
                }
            }
            break;
        }
        else
            figure[i].shape=sh;
        printf("Put the coordinate of Point1: ");
        scanf("%d %d",&(figure[i].point.x1),&(figure[i].point.y1));
        printf("Put the coordinate of Point2: ");
        scanf("%d %d",&(figure[i].point.x2),&(figure[i].point.y2));
    }

    return 0;
}