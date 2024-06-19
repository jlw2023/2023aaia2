#include <stdio.h>

int prime(int n) {
    if (n <= 1) return 0; // 1 不是質數，小於 1 的數也不是質數

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0; // 如果 n 能被 i 整除，則不是質數
    }
    return 1; // 其他情況為質數
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int ans = 0; // 初始化計數器

    for (int i = a; i <= b; i++) {
        if (prime(i)) ans++; // 如果 i 是質數，則計數器加一
    }

    printf("%d\n", ans); // 輸出結果
}
