#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int year, int month) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
        return 29;
    return days[month - 1];
}

int main() {
    int year, month, day;
    char slash;
    if (scanf("%d%c%d%c%d", &year, &slash, &month, &slash, &day) != 5 || slash != '/') {
        printf("�����ʽ����\n");
        return 1;
    }

    // �����2000��1��1�յ��������ڵ�������
    int totalDays = 0;
    for (int y = 2000; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        totalDays += daysInMonth(year, m);
    }

    totalDays += day - 1; // 2000-1-1Ϊ��0��

    // �ж��Ǵ��㻹��ɹ��
    int remainder = totalDays % 5;
    if (remainder < 3)
        printf("fishing\n");
    else
        printf("sleeping\n");

    return 0;
}
