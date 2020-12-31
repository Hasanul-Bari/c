#include<stdio.h>
int main()
{
    int id[1000],i,n,c=0;
    float marks[1000],s=0.0,av;

    printf("Enter the no of students:\n");
    scanf("%d",&n);

    printf("Enter the ids and obtained marks\n");

    for(i=0; i<n; i++)
    {
        printf("student %d\t",i+1);
        scanf("%d %f", &id[i],&marks[i]);
    }

    for(i=0; i<n; i++)
    {
        s=s+marks[i];
    }
    av=s/n;

    printf("The average marks of all students is %.2f\n",av);

    printf("Students who have got greater marks than average marks:\n");

    for(i=0; i<n; i++)
    {
        if(marks[i]>av)
        {
            printf("student %d %d %.2f\n",i+1, id[i],marks[i]);
            c++;
        }
    }

    printf("No of students who have got greater marks than average marks is %d\n",c);

    return 0;
}


