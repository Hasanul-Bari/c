#include<stdio.h>
int main()
{
    int n,i,j,c=0,c1=0;

    printf("Enter the no of students:\n");
    scanf("%d",&n);
    float gp[n][5];
    printf("Enter the gp of 5 courses\n");
    for(i=0; i<n; i++)
    {
        printf("student %d\t",i+1);
        for(j=0; j<5; j++)
        {
            scanf("%f",&gp[i][j]);
        }

    }

    for(i=0; i<n; i++)
    {

        for(j=0; j<5; j++)
        {
            if(gp[i][j]<2.00)
                c++;
        }
        if(c>3)
            c1++;
        c=0;

    }
    printf("No of students who have failed in more than 3 courses is %d\n",c1);

    printf("\nFailed students are :\n");

    for(i=0; i<n; i++)
    {

        for(j=0; j<5; j++)
        {
            if(gp[i][j]<2.00)
                c++;
        }
        if(c>3)
            printf("student %d\n",i+1);
        c=0;

    }



    return 0;


}
