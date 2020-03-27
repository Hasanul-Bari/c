#include<stdio.h>
main()
{
    int n,i,j,k;
    printf("Input total number of students:\n");
    scanf("%d",&n);
    int id[n];
    printf("Enter the student ID:\n");
    for(i=0;i<n;i++){
     printf("Enter ID of Student no #%d\n",i+1);
     scanf("%d",&id[i]);
    }

    printf("The admission year details  of the students:\n");

       for(i=0;i<n;i++){
 printf("Student ID :%d\t ",id[i]);
 printf("Admission year: 20%d\n",id[i]/100000);

    }

}

