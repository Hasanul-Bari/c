#include<stdio.h>
int main()
{
    int id[1000],att[1000],quiz[1000],mid_s[1000],fin[1000],n,i,to[1000],sum=0,count=0,avg;
    printf("Enter the no of students n=",&n);
    scanf("%d",&n);
    printf("Enter student id, marks of attendance,quiz,mid-semester,and final respectively:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d %d %d",&id[i],&att[i],&quiz[i],&mid_s[i],&fin[i]);
    }
    for(i=0;i<n;i++)
    {
        to[i]=att[i]+quiz[i]+mid_s[i]+fin[i];
    }
    for(i=0; i<n; i++)
    {
        sum=sum+to[i];
    }
    avg=sum/n;
    for(i=0; i<n; i++)
    {
        if(to[i]>avg)
        {
            count=count+1;

            printf("student id= %d\n", id[i]);
        }
    }
    printf("No of students who got higher marks than average= %d",count);
    return 0;

}
