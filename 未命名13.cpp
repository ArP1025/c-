#include <stdio.h>

int main() {
    int n, s = 0, i;
    
    scanf("%d", &n);

    // ���ѭ������ÿ����
    for (i = 1; i <= n; i++) {
        int m = 1; // ÿ��ѭ����ʼʱ���ý׳�Ϊ1
        // ���㵱ǰ���Ľ׳�
        for (int j = 1; j <= i; j++) {
            m *= j;
        }
        s += m; // �ۼӵ�ǰ���Ľ׳˵��ܺ�
    }

    printf("%d", s);
    return 0;
}
