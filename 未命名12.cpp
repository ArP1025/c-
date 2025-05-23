#include <stdio.h>
int main() {
    double sum = 100, h = 100;
    for (int i = 2; i <= 10; i++) {
        h /= 2;              // 反弹高度
        sum += h * 2;        // 反弹后再下落，路程加2倍h
        if (i == 10) {
            sum -= h;        // 第十次落地后不反弹，减去多余的反弹路程
        }
    }
    printf("第十次落地总路程：%.2f米\n", sum);
    printf("第十次反弹高度：%.2f米\n", h / 2);  // 第十次反弹高度为落地前的反弹高度
    return 0;
}
