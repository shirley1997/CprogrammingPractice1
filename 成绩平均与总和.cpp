#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Ոݔ����ĳɿ�:\n", a);
    printf("Ոݔ��Ӣ�ĳɿ�:\n", b);
    printf("Ոݔ�딵�W�ɿ�:\n", c);
    scanf("%d%d%d", &a, &b, &c);
    printf("���͞�:%d\n", a+b+c);
    printf("ƽ����:%d\n", (a+b+c)/3);
    return 0;
}
