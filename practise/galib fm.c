#include<stdio.h>
#include<string.h>

struct students
{
    char name[20], degree[5];
    int S_ID, age, admission_year;
}total[5];


int main()
{
    FILE *f1, *f2;
   f1= fopen("students_info.txt","w");
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%s %d %d %d %s",total[i].name,&total[i].S_ID,&total[i].age,&total[i].admission_year,total[i].degree);
    }

    for(i=0;i<5;i++)
    {
        fprintf(f1,"%s %d %d %d %s\n",total[i].name,total[i].S_ID,total[i].age,total[i].admission_year,total[i].degree);
    }
    fclose(f1);
    f1=fopen("students_info.txt","r");
    f2=fopen("filtered.txt","w");
    for(i=0;i<5;i++)
    {
        if(strcmp(total[i].degree,"cse")==0)
        {
            fprintf(f2,"%s\n",total[i].name);
        }
    }

    fclose(f1);
    fclose(f2);
    return 0;

}
