#include <stdio.h>

int main() {
    int a;
    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
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