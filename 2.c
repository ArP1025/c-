#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b!=c && a!=c)
    {
        printf("C");
    }
    else if(a==c && b!=a && b!=c)
    {
        printf("B");
    }
    else if(b==c && a!=b && a!=c)
    {
        printf("A");
    }
    else
    {
        printf("fasle");
    }
}