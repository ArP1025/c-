#include<stdio.h>
int main()
{
    int a,b,c,d;
    int Sum;
    double Average;
    printf("Enter 4 numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    Sum = a + b + c + d;
    Average = (double)Sum / 4;
    printf("Sum = %d;Average = %.1f",Sum,Average);
    
    return 0;



   
}