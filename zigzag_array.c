#include <stdio.h>

#define MAX 51

int main(void) {
    int j,i,n,c=1;   
    int arr[MAX][MAX];
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
			if(i %2==0) {
				for (j = 0; j < n; j++) {
					arr[j][i]=c; 
					c++;
				}
			}
			else if(i%2 !=0) {
				for (j = n-1; j >= 0; j--) {
					arr[j][i]=c; 
					c++;
				}
			}
		}

    for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) {
				printf("%d ",arr[i][j]);
			}
        printf("\n");
    }
  return 0;
}