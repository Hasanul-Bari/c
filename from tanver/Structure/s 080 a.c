///use of pointers (a)
#include<stdio.h>
void inc (int *a)
{
    (*a)++;

}
int  main()
{
    int a=5;
    int *p=&a;
    printf("Before inc A=%d\n",a);
    inc(&a);///address of a variable a is sent
    printf("After inc A=%d\n",a);
    return 0;
}

