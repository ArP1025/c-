#include<stdio.h>
int main()
{
    int i=1, sum=1;
    while(i<=5)
    {
        printf("i=%d\n",i);
        sum=sum*i;
        printf("sum=%d\n",sum);
        i=i+1;
    }
    return 0;
}