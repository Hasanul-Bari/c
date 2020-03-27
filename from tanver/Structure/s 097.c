///sort a structure array
#include<stdio.h>
#include<string.h>

struct cse12
{
    char name[10];
    int sid;
    double cgpa;
};
void output (struct cse12 student[])
{
    int i;
    printf("*****OUTPUT******\n");
    for(i=0; i<10; i++)
    {
        printf("%d %s  %.2lf\n",student[i].sid,student[i].name,student[i].cgpa);
    }
}

void input (struct cse12 student[])
{
    int i;
    printf("*****INPUT***********\n");
    for(i=0; i<10; i++)
    {
        scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
}
void idsort (struct cse12 student[])
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(student[i].sid>student[j].sid)
            {
                struct cse12 temp;
                strcpy(temp.name,student[i].name);
                temp.sid=student[i].sid;
                temp.cgpa=student[i].cgpa;

                strcpy(student[i].name,student[j].name);
                student[i].sid=student[j].sid;
                student[i].cgpa=student[j].cgpa;

                strcpy(student[j].name,temp.name);
                student[j].sid=temp.sid;
                student[j].cgpa=temp.cgpa;
            }
        }
    }
}
main()
{
    struct cse12 student[10];
    input (student);
    idsort (student);
    output (student);
    printf("\nhappiness is when your program runs without any error  :)\n\a");
}
