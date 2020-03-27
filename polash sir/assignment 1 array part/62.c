#include<stdio.h>
int main()
{
    int id[1000],i,n;
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

    return 0;
}
