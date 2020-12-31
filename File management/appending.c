#include<stdio.h>
int main()
{
    char str[50];
    FILE *p2;

    p2=fopen("output.txt", "a");
    fprintf(p2,"\nAnd I'm awesome");


    fclose(p2);
    return 0;

}
