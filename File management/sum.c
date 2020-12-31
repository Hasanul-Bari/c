#include<stdio.h>
int main()
{
    int sum,x,y;
    FILE *p1,*p2;
    p1=fopen("input.txt","r");
    fscanf(p1, "%d %d", &x ,&y);

    p2=fopen("output.txt", "w");
    sum=x+y;
    fprintf(p2,"%d", sum);


    fclose(p1);
    fclose(p2);
    return 0;

}
