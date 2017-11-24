#include <stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d", &a,&b,&c);
    if(b>a){
        temp=a;a=b;b=temp;
    }
    if(c>a) printf("%d %d %d\n", c,a,b);
    else if(b<c) printf("%d %d %d\n", a,c,b);
    else printf("%d %d %d\n", a,b,c);
    return 0;
}
