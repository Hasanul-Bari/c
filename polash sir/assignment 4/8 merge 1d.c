#include<stdio.h>
int main()
{
    int ary1[100],ary2[100], ary3[200], n, k, i, j,m;

    printf("Enter size of 1st array:");
    scanf("%d", &n);
    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ary1[i]);
    }

    printf("Enter size of 2nd array:");
    scanf("%d", &k);
    printf("\nEnter %d elements:\n", k);
    for(j=0; j<k; j++)
    {
        scanf("%d", &ary2[j]);
    }


    for(i=0; i<n; i++)
    {
        ary3[i]=ary1[i];
    }
    for(j=0; j<k; j++)
    {
        ary3[i+j]=ary2[j];
    }


    printf("The merged array is:");
    for(m=0; m<n+k; m++)
    {
        printf("%d\t",ary3[m]);
    }
    return 0;


}



