#include <stdio.h>

int main()
{
    double n1, n2, n3;
    int ch;
    FILE *fp = fopen("scores.txt", "r");
    FILE *fp2= fopen("averages.txt", "w");
    while (1)
    {   
        ch = fscanf(fp, "%lf %lf %lf", &n1,&n2,&n3);
        if (ch == EOF)
            break;
        fprintf(fp2,"%.2f\n",(n1+n2+n3)/3);
    }
    fclose(fp);
    fclose(fp2);
    return 0;
}

