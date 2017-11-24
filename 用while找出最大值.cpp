#include <stdio.h>
int main()
{
    int max=0,n=7,x;
    while(n!=0){
        scanf("%d", &x);
        if(x>max) max=x;
        n--;



    }
    printf("max:%d\n", max);
}
