///armstrong numbers;
#include<stdio.h>
main()

{
    int n,sum=0,r;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int temp=n;
  while(n!=0)
  {
      r=n%10;
      sum=sum+r*r*r;
      n=n/10;
  }
  if(temp==sum)printf("The number is an armstrong number\n");
    else printf("The number is not an armstrong number\n");
}
