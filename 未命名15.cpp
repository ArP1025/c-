//#include<stdio.h>
//int main()
//{
//	int x,y;
//	scanf("%d",&x);
//    y = (x * x);
//    printf("%d = %d * %d\n",y,x,x);
//	printf("%d * %d = %d\n",x,x,y);
	
//}
#include <stdio.h>

int main() {
    int x = 3;
    int y = x * x;
    
    printf("%d = %d * %d\n", y, x, x);  // 输出 y = x * x 的值
    printf("%d * %d = %d\n", x, x, y);  // 输出 x * x = y 的值
    
    return 0;
}
