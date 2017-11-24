#include <stdio.h>
int main()
{
    int a,b,c;

    printf("請輸入國文成績:\n", a);
    printf("請輸入英文成績:\n", b);
    printf("請輸入數學成績:\n", c);
    scanf("%d%d%d", &a, &b, &c);
    printf("總和為:%d\n", a+b+c);
    printf("平均為:%d\n", (a+b+c)/3);
    return 0;
}
