#include <stdio.h>
int main(void)
{
    int n,k=2;
    scanf("%d", &n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            k=0;
        }
    }
    if(n==1) printf("%d非质数\n", n);
    else if(k==1) printf("%d是质数\n",n);
    else if(k==0) printf("%d非质数\n",n);

    return 0;
}
