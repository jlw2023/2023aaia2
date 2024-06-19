#include <stdio.h>

int prime(int n) {
    if (n <= 1) return 0; // 1 ���O��ơA�p�� 1 ���Ƥ]���O���

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // �p�G n ��Q i �㰣�A�h���O���
    }
    return 1; // ��L���p�����
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ans = 0; // ��l�ƭp�ƾ�

    for (int i = a; i <= b; i++) {
        if (prime(i)) ans++; // �p�G i �O��ơA�h�p�ƾ��[�@
    }

    printf("%d\n", ans); // ��X���G
}
