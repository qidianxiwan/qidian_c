#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
        int b = a % 5;
        if (b == 0)
        {
            printf("YES");
        }
        else if (b != 0)
        {
            printf("NO");
        }
    }
    return 0;
}