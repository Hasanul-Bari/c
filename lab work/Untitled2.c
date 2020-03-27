int main()
{

    count_to_n(0);
}

void count_to_n(int count)
{
    int n;
    scanf("%d",n);
    printf("%d",count);
    if(count<n)
    {
        count_to_n(count+1);
    }


}

