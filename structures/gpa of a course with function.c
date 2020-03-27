#include<stdio.h>
float gp(int x);
int sum_n (int a);
struct student
{
    char name[25];
    int sid;
    char dept[25];
    int marks;
    float gp;

};
int main()
{
    int i,n,p;
    struct student s[100];
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%s %d %s %d", s[i].name,&s[i].sid, s[i].dept , &s[i].marks);
    }


    for(i=0; i<n; i++)
    {
            s[i].gp=gp(s[i].marks);
            p=sum_n(s[i].marks);

    }
    for(i=0; i<n; i++)
    {
        printf("%s %d %s %d %0.2f\n",s[i].name, s[i].sid, s[i].dept , s[i].marks,s[i].gp);


    }
    printf("%d", p);

    return 0;
}
float gp(int x)
{
    float y;
    if(x>=80 && x<100)
            {
                y=4.00;
            }
            else if(x>=75 && x<80)
            {
                y=3.75;
            }
             else if(x>=70 && x<75)
            {
                y=3.5;
            }
             else if(x>=65 && x<70)
            {
                y=3.25;
            }
             else if(x>=60 && x<65)
            {
                y=3.00;
            }
             else if(x>=55 && x<60)
            {
                y=2.75;
            }
             else if(x>=50 && x<55)
            {
                y=2.5;
            }
             else if(x>=45 && x<50)
            {
                y=2.25;
            }
             else if(x>=40 && x<45)
            {
                y=2.00;
            }
             else if(x<40)
            {
                y=0.00;
            }
    return y;
}


int sum_n (int a)
{
    int sum =0;
    sum=a+sum;
    return sum;
}
