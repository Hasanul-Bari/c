#include<stdio.h>
int main()
{
    char str[50];
    FILE *p1,*p2;
    p1=fopen("input.txt","r");

    fgets(str,50,p1);

    p2=fopen("output.txt", "w");
    fputs(str,p2);


    fclose(p1);
    fclose(p2);
    return 0;

}
