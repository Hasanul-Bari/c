#include<stdio.h>
#include<string.h>
/***void input(struct CSE12 student[]);
void output(struct CSE12 student[]);
void namesort(struct CSE12 student[]);**/
struct CSE12
{
    char name[20];
    int sid;
    double cgpa;
};
void input(struct CSE12 student[])
{
    printf("        INPUT       \n");
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%s%d%lf",student[i].name,&student[i].sid,&student[i].cgpa);
    }
}
void output(struct CSE12 student[])
{
    printf("        OUTPUT      \n");
    int i;
    for(i=0;i<3;i++)
    {
        printf("%s      %d      %.2lf\n",student[i].name,student[i].sid,student[i].cgpa);
    }
}
void namesort(struct CSE12 student[])
{
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            if(strcmp(student[i].name,student[j].name)>0)
            {
                struct CSE12 temp;
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

int main()
{
    struct CSE12 student[3];
    input(student);
    namesort(student);
    output(student);

    return 0;
}
