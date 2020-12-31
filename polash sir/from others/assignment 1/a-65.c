#include<stdio.h>
main()
{
    int n,i,j,ck=0,ck1=0;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    float marks[n][5];
    for(i=0; i<n; i++)
    {
        printf("Input the 5 course grade of student %d\n",i+1);
        for(j=0; j<5; j++)
            scanf("%f",&marks[i][j]);

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(marks[i][j]<2.00)
            {


                ck++;
            }

        }
         if(ck>0)
            {

                ck1++;

            }
             ck=0;
    }
    printf("The number of failed %d\n",ck1);
    printf("The failed students are:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(marks[i][j]<2.00)
            {
                printf("Student no %d  course no : %d\n",i+1,j+1);
            }

        }


    }
}
