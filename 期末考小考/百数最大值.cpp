#include <stdio.h>
int num[100];
int main()
{
    int n,max=0;
    scanf("%d", &n);
    for(int i=0;i<100;i++){
        scanf("%d", &num[i]);
    }
    for(int i=0;i<100;i++){
        if(num[i]>max) max=num[i];
        printf("%d", max);
    }
    for(int i=0;i<100;i++){
        printf("%d", num[i]);
    }
}
