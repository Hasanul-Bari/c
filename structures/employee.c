#include<stdio.h>
struct employee
{
    char name[20];
    int day;
    char month[10];
    int year;
    float salary;
};
int main()
{
    int i;
    struct employee e1;
    scanf("%s %d %s %d %f",e1.name,&e1.day,e1.month,&e1.year,&e1.salary);
    printf("%s %d %s %d %f",e1.name,e1.day,e1.month,e1.year,e1.salary);
    return 0;
}
