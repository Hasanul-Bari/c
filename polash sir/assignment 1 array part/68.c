#include<stdio.h>
int main()
{
    int n,i,y;
    printf("Enter no of students\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter IDs of %d students\n",n);
    for(i=0; i<n; i++)
    {
        printf("student %d:\t",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        y=a[i]/100000;
        printf("%d - admitted year:20%d\n",a[i],y);
    }




    return 0;
}
