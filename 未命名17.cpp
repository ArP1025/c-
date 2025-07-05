#include <stdio.h>

int main() {
    // 方法1: 定义时初始化
    int array1[5] = {10, 20, 30, 40, 50};
    printf("数组1: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");
}
