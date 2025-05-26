#include <stdio.h>

int main() {
    int n, s = 0, i;
    
    scanf("%d", &n);

    // 外层循环遍历每个数
    for (i = 1; i <= n; i++) {
        int m = 1; // 每次循环开始时重置阶乘为1
        // 计算当前数的阶乘
        for (int j = 1; j <= i; j++) {
            m *= j;
        }
        s += m; // 累加当前数的阶乘到总和
    }

    printf("%d", s);
    return 0;
}
