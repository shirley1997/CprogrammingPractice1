#include <stdio.h>
int main()
{
    int co90=0,co80=0,co70=0,co60=0,co_below60=0;
    int number,sum=0,score;
    int i;
    float ave=0.0;
    printf("输入学生人数：\n", number);
    scanf("%d", &number);
    for(int i=0;i<number;i++){
        printf("输入学生成绩：\n");
        scanf("%d", &score);
        if(score>=90) co90++;
        if(score>=80 && score<90) co80++;
        if(score>=70 && score<80) co70++;
        if(score>=60 && score<70) co60++;
        if(score<60) co_below60++;
        sum=sum+score;
        ave=(int)sum/(float)number;

    }

    printf("%d个学生成绩大于90\n", co90);
    printf("%d个学生成绩介于80-70\n", co80);
    printf("%d个学生成绩介于70-80\n", co70);
    printf("%d个学生成绩介于60-70\n", co60);
    printf("%d个学生的成绩小于60\n", co_below60);
    printf("平均是：%.2f\n", ave);
    return 0;
}
