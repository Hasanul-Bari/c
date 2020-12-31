#include<stdio.h>
#include<math.h>
int digitcounter(int x);
main()
{
    int i,j,x,k=0,n,total_digit=0;
    double z=0;
    printf("Input number of integers:\n");
    scanf("%d",&n);
    int con[n];
  for(i=0;i<n;i++){
    scanf("%d",&con[i]);
    x=con[i];
    total_digit=total_digit+digitcounter(x);

}

for(i=0;i<n;i++)
{
    int m=con[i];

    k=k+digitcounter(m);

    z=z+con[i]*pow(10,(total_digit-k));

}

printf("%.lf\n",z);
}


int digitcounter (int x)
{
    int ck=0;
    while(x!=0)
    {
        x=x/10;
        ck++;
    }
    return ck;
}
