#include<stdio.h>
int main()
{
     int w, h, d;
     scanf("%d%d%d", &w,&h,&d);
     printf("%d ", (h*w+w*d+d*h)*2);
     printf("%d ", w*h*d);

}
