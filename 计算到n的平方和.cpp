#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("输入任一整数:\n");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        sum+=i*i;
    }
    printf("1*1+2*2+...+%d*%d=%d", n, n,sum);
}
