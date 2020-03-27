#include<stdio.h>
struct students
{
    char name[20];
    int age;
    int year;
    char deg[4];
    int id;

};

int main()
{
    FILE *p1,*p2;
    int n,i;
    struct students s[1000];

    printf("Enter the no of students:\n");
    scanf("%d",&n);
    printf("Enter name,age,admission_year,degree and id of %d students\n",n);

    for(i=0; i<n; i++)
    {
        printf("student %d\t",i+1);
        scanf("%s %d %d %s %d",s[i].name,&s[i].age,&s[i].year,s[i].deg,&s[i].id);
    }


    p1=fopen("students_info.txt","w");

    for(i=0; i<n; i++)
    {
        fprintf(p1,"%s %d %d %s %d\n",s[i].name,s[i].age,s[i].year,s[i].deg,s[i].id);
    }
    fclose(p1);

    p1=fopen("students_info.txt","r");

    p2=fopen("filtered.txt","w");
    for(i=0; i<n; i++)
    {
        if(strcmp(s[i].deg,"cse")==0)
        {
            fprintf(p2,"%s %d %d %s %d\n",s[i].name,s[i].age,s[i].year,s[i].deg,s[i].id);
        }
    }
    fclose(p1);
    fclose(p2);

    return 0;
}
