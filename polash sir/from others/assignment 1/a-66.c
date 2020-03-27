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
       printf("The failed students are:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(marks[i][j]<2.00)
            {


                ck++;
            }


        }
        if(ck>3)
            {
                printf("Student no %d\n",i+1);
                ck1++;

            }
              ck=0;

    }
    printf("The number students failed more than 3 courses:  %d\n",ck1);


}

