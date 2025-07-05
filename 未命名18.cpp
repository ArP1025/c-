#include <stdio.h>

int main() {
    int height, i, j, k;
    
    printf("请输入金字塔组合的高度: ");
    scanf("%d", &height);
    
    // 上半部分：正金字塔
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height - i; j++) printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) printf("*");
        printf("\n");
    }
    
    // 下半部分：倒金字塔（注意高度减1，避免重复顶部）
    for (i = height - 1; i >= 1; i--) {
        for (j = 1; j <= height - i; j++) printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) printf("*");
        printf("\n");
    }
    
    return 0;
}
