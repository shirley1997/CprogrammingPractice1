#include <stdio.h>
int num[100];
int main()
{
    int sum=0;
    for(int i=0;i<100;i++){
        scanf("%d", &num[i]);
        sum+=num[i];
    }
    float avg=sum/100.0;
    printf("avg=%g\n", avg);
    float ans=0;
    for(int i=0;i<100;i++){
        ans+=(num[i]-avg)*(num[i]-avg);
    }
    printf("var=%g,ans/100");
}
