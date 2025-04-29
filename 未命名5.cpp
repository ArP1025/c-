#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("请输入一个三位数：");
	scanf("%d",&n);
	a=n/100;
	b=(n/10%10)*10;
	
	c=(n%10)*100;
	
	printf("%d = %d + %d + %d\n",n,a,b,c);
	
}
