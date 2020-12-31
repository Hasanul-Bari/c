#include<stdio.h>

int main()

{
    int ID[10],marks[10],i,j;
    double grade1[10],grade2[10];
    for(i=1 ; i<=10 ; i++)
    {
        scanf("%d",&ID[i]);
    }
    for(i=1 ; i<=10 ; i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=1 ; i<=10 ; i++)
    {
        if(ID[i]%2==0)
        {
            if(marks[i]>=80)
            {
                grade1[i]=4.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=75 && marks[i]<80)
            {
                grade1[i]=3.50;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=70 && marks[i]<75)
            {
                grade1[i]=3.25;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=65 && marks[i]<70)
            {
                grade1[i]=3.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=60 && marks[i]<65)
            {
                grade1[i]=2.75;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=55 && marks[i]<60)
            {
                grade1[i]=2.50;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=50 && marks[i]<55)
            {
                grade1[i]=2.25;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=45 && marks[i]<50)
            {
                grade1[i]=2.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=40 && marks[i]<45)
            {
                grade1[i]=1.75;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else
            {
                grade1[i]=0.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
        }
        else
        {
            if(marks[i]>=80)
            {
                grade1[i]=4.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=75 && marks[i]<80)
            {
                grade1[i]=3.50;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=70 && marks[i]<75)
            {
                grade1[i]=3.25;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=65 && marks[i]<70)
            {
                grade1[i]=3.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=60 && marks[i]<65)
            {
                grade1[i]=2.75;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=55 && marks[i]<60)
            {
                grade1[i]=2.50;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=50 && marks[i]<55)
            {
                grade1[i]=2.25;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=45 && marks[i]<50)
            {
                grade1[i]=2.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else if(marks[i]>=40 && marks[i]<45)
            {
                grade1[i]=1.75;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
            else
            {
                grade1[i]=0.00;
                printf("%d : %.2lf\n",ID[i],grade1[i]);
            }
        }
    }
    printf("\n\n");
    double grade;
    scanf("%lf",&grade);
    for(i=1 ; i<=10 ; i++)
    {
        if(grade==grade1[i])
        {
            printf("%d\n",ID[i]);
        }
    }
    return 0;
}
