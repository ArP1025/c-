#include <stdio.h>

int main() {
    int height, i, j, k;
    
    printf("�������������ϵĸ߶�: ");
    scanf("%d", &height);
    
    // �ϰ벿�֣���������
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= height - i; j++) printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) printf("*");
        printf("\n");
    }
    
    // �°벿�֣�����������ע��߶ȼ�1�������ظ�������
    for (i = height - 1; i >= 1; i--) {
        for (j = 1; j <= height - i; j++) printf(" ");
        for (k = 1; k <= 2 * i - 1; k++) printf("*");
        printf("\n");
    }
    
    return 0;
}
