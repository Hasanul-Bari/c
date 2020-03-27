///use of pointers (a)
#include<stdio.h>
void inc (int a)
{
    a++;

}
int  main()
{
    int a=5;
    printf("Before inc A=%d\n",a);
    inc(a);
    printf("After inc A=%d\n",a);/*here value of the a will not be  increased because 'a' is the local variable in the user defined function*/
    return 0;/*so we have to solve the problem by using pointers or declaring global variable. see s080a.c*/
}
