#include<stdio.h>
struct student
{
    char name[25];
    char dept[25];

};
int main()
{
    int i,n,p;
    struct student s[20];
    for(i=0; i<5 ; i++)
    {
        scanf("%s %s", s[i].name,s[i].dept);
    }

    for(i=0; i<5 ; i++)
    {
        if(strcmp(s[i].dept,"cse")==0)
        {
            printf("\n%s %s", s[i].name,s[i].dept);
        }
    }
    return 0;
}
