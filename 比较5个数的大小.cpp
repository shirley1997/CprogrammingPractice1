#include <stdio.h>
int main()
{
    int largest,smallest,a,b,c;
    int temp;
    scanf("%d%d%d%d%d", &largest,&smallest,&a,&b,&c);
    if(largest<smallest){
        temp=smallest;
        smallest=largest;
        largest=temp;
    }
    if(a>largest){
        largest=a;
    }
    if(b>largest){
        largest=b;
    }
    if(c>largest){
        largest=c;
    }
    if(a<smallest){
        smallest=a;
    }
    if(b<smallest){
        smallest=b;
    }
    if(c<smallest){
        smallest=c;
    }
    printf("最大值:%d\n", largest);
    printf("最小值:%d\n", smallest);
}
