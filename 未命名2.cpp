#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3;

    printf("100��999֮���ˮ�ɻ����У�\n");
    for (num = 100; num <= 999; num++) {
        digit1 = num / 100;
        digit2 = (num / 10) % 10;
        digit3 = num % 10;

        if (digit1 * digit1 * digit1 + digit2 * digit2 * digit2 + digit3 * digit3 * digit3 == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}    
