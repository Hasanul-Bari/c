#include<stdio.h>
struct student
{
    char name[25];
    int sid;
    char dept[25];
    int level;
    char sem[3];
    int marks;
    float gp;

};
int main()
{
    int i,n;
    struct student s[100];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s %d %s %d %s %d", s[i].name,&s[i].sid, s[i].dept, &s[i].level, s[i].sem, &s[i].marks);
    }
    for(i=0; i<n; i++)
    {
            if(s[i].marks>=80 && s[i].marks<100)
            {
                s[i].gp=4.00;
            }
            else if(s[i].marks>=75 && s[i].marks<80)
            {
                s[i].gp=3.75;
            }
             else if(s[i].marks>=70 && s[i].marks<75)
            {
                s[i].gp=3.5;
            }
             else if(s[i].marks>=65 && s[i].marks<70)
            {
                s[i].gp=3.25;
            }
             else if(s[i].marks>=60 && s[i].marks<65)
            {
                s[i].gp=3.00;
            }
             else if(s[i].marks>=55 && s[i].marks<60)
            {
                s[i].gp=2.75;
            }
             else if(s[i].marks>=50 && s[i].marks<55)
            {
                s[i].gp=2.5;
            }
             else if(s[i].marks>=45 && s[i].marks<50)
            {
                s[i].gp=2.25;
            }
             else if(s[i].marks>=40 && s[i].marks<45)
            {
                s[i].gp=2.00;
            }
             else if(s[i].marks<40)
            {
                s[i].gp=0.00;
            }

    }
    for(i=0; i<n; i++)
    {
        printf("%s %d %s %d %s %d %0.2f\n",s[i].name, s[i].sid, s[i].dept, s[i].level, s[i].sem, s[i].marks,s[i].gp);

    }



    return 0;



}
