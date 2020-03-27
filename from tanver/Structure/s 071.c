///pointer closer look about increment
#include<stdio.h>
main()
{
    int a=6,*p=&a;
    printf("%d     %d         %d\n",a,*p,p);
  *(p++);
//(*p)++;
    printf("%d     %d         %d\n",a,*p,p);
}
