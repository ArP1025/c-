#include<stdio.h>
int main()
{
	int x,y;
	printf("������x��ֵ��");
	scanf("%d",&x);
	if(x<1){
		y=x;
		printf("%d\n",y);
	} 
	else if(x>=1&&x<10){
		y=2*x-1;
		printf("%d\n",y);
	}
	else if(x>10) {
		y=3*x-11;
		printf("%d\n",y);
	}
	return 0;
}
