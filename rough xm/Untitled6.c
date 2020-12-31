#include<stdio.h>
void count_to_n(int count)
{


    if(count<9)
    {
        count_to_n(count+1);
        printf("%d",count+1);
    }

}
int main()
{

    count_to_n(0);
    return 0;

}

