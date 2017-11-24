#include <stdio.h>
int num[100];
int main()
{
    for(int i=0;i<100;i++){
        scanf("%d", &num[i]);
    }
    int ans=0;
    for(int i=0;i<100;i++){
        if(num[ans]>num[i]){
            ans=i;
        }
    }
    printf("%d", ans);
}
