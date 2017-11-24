#include <stdio.h>
float a[12];
int main()
{
    printf("1的平均溫度:\n2的平均溫度:3的平均溫度:4的平均溫度:5的平均溫度:6的平均溫度:7的平均溫度:8的平均溫度:9的平均溫度:10的平均溫度:11的平均溫度:12的平均溫度:===================");
    float ave=0.0;
    for(int i=0;i<12;i++){
        scanf("%f", &a[i]);
        ave+=a[i];
    }
    ave=ave/12.0;
    printf("\n年平均温度为：%f",ave);

}
