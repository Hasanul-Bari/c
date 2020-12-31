#include<stdio.h>
int main()
{
    int id[5],marks[5],j;
    printf("Enter student ID of 10 students:\n");
    for(j=0; j<5; j++)
    {
        scanf("%d\n",&id[j]);
    }
    printf("Enter their marks:\n");
    for(j=0; j<5; j++)
    {
        scanf("%d\n",&marks[j]);
    }
    printf("Even ids\n");

    for(j=0; j<5; j++)
    {
        if(id[j]%2==0)
        {
            if(marks[j]>=80 && marks[j]<100 )   printf("%d   A+\n",id[j]);
            else if(marks[j]>=70 && marks[j]<80 )    printf("%d   A \n",id[j]);
            else if(marks[j]>=60 && marks[j]<70 )    printf("%d   A-\n",id[j]);
            else if(marks[j]>=50 && marks[j]<60 )    printf("%d   B\n", id[j]);
            else if(marks[j]>=40 && marks[j]<50 )    printf("%d   C\n", id[j]);
            else if(marks[j]>=33 && marks[j]<40 )    printf("%d   D\n", id[j]);
            else printf("%d   F\n", id[j]);
        }
    }
    printf("odd ids\n");

    for(j=0; j<5; j++)
    {
        if(id[j]%2!=0)
        {
            if(marks[j]>=80 && marks[j]<100 )   printf("%d   A+\n",id[j]);
            else if(marks[j]>=70 && marks[j]<80 )    printf("%d   A \n",id[j]);
            else if(marks[j]>=60 && marks[j]<70 )    printf("%d   A-\n",id[j]);
            else if(marks[j]>=50 && marks[j]<60 )    printf("%d   B\n", id[j]);
            else if(marks[j]>=40 && marks[j]<50 )    printf("%d   C\n", id[j]);
            else if(marks[j]>=33 && marks[j]<40 )    printf("%d   D\n", id[j]);
            else printf("%d   F\n", id[j]);
        }
    }





    return 0;
}
/*
66
67
68
69
70
71
72
73
74
75

90
80
70
65
55
45
35
33
30
20*/

