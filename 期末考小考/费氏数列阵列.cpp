#include <stdio.h>
int fib[100];
int main()
{
    int n;
    scanf("%d", &n);
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=n;i>=0;i--){
        printf("f(%d)=%d\n", i,fib[i]);
    }
}
