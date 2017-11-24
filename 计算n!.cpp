#include <stdio.h>
int main()
{
    int n,i=1,sum=1;
    scanf("%d", &n);
    while(i<=n){
        sum=sum*i;
        i=i+1;

    }
    printf("%d", sum);
}
