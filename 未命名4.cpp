#include<stdio.h>
int main()
{
	int i;
	int sum = 0;
	while(1)
	{
		scanf("%d",&i);
		if(i<=0){
			break;
		}
		if(i%2 !=0 ){
			sum+=i;
		}
		
		
	}
	printf("%d\n",sum);
	
}
