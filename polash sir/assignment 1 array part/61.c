#include<stdio.h>
int main()
{
    int id[1000],i,n;
    float marks[1000],g;

    printf("Enter the no of students:\n");
    scanf("%d",&n);

    printf("Enter the ids and obtained marks\n");

    for(i=0; i<n; i++)
    {
        printf("student %d\t",i+1);
        scanf("%d %f", &id[i],&marks[i]);
    }

    printf("The result is\n");
    printf("sl ids marks gradepoint grade\n");

    for(i=0; i<n; i++)
    {
        if(marks[i]>=80 && marks[i]<100)
        {
            g=4.00;
        }
        else if(marks[i]>=75 && marks[i]<80)
        {
            g=3.75;
        }
         else if(marks[i]>=70 && marks[i]<75)
        {
            g=3.5;
        }
         else if(marks[i]>=65 && marks[i]<70)
        {
            g=3.25;
        }
         else if(marks[i]>=60 && marks[i]<65)
        {
            g=3.00;
        }
         else if(marks[i]>=55 && marks[i]<60)
        {
            g=2.75;
        }
         else if(marks[i]>=50 && marks[i]<55)
        {
            g=2.5;
        }
         else if(marks[i]>=45 && marks[i]<50)
        {
            g=2.25;
        }
         else if(marks[i]>=40 && marks[i]<45)
        {
            g=2.00;
        }
         else if(marks[i]<40)
        {
            g=0.00;
        }

        printf("%d %d %.2f %.2f\n",i+1,id[i],marks[i],g);


    }

    return 0;


}
