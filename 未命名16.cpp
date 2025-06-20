#include <stdio.h>

// 计算一维数组的平均值
float arp(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return (float)sum / len;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int len = sizeof(arr) / sizeof(arr[0]);
    float average;
    
    average = arp(arr, len);
    
    printf("数组的平均值是：%.2f\n", average);
    
    return 0;
}
