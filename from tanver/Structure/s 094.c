#include<stdio.h>
#include<string.h>
struct cse
{
    char name[20];
    int sid;
    double cgpa;
};
int main()
{
    struct cse student ;
    strcpy(student.name,"Sharif");
    student.sid=1;
    student.cgpa=3.0;
    printf("Student name:%s\n",student.name);
        printf("Student ID:%d\n",student.sid);
            printf("Student cgpa:%.2lf\n",student.cgpa);
}
