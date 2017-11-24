#include <stdio.h>
int num[100];
int main()
{
    for(int i=0;i<100;i++){
        int a;
        scanf("%d", &a);
        num[i]=a;
    }
    for(int i=99;i>=0;i--){
        printf(" %d", num[i]);
    }

}
