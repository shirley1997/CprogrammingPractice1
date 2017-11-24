#include <stdio.h>
int main()
{
    int a,d,n,s=0;
    scanf("%d%d%d", &a,&d,&n);
    for(int i=0;i<n;i++){
        s+=(a+i*d);
    }
    printf("%d",s);
}
