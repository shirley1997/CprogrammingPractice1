#include <stdio.h>
int main()
{
    float h,w;
    scanf("%f%f", &h,&w);
    float bmi=w/(h*h);
    printf("%g\n", bmi);
    if(bmi<18.5) printf("too thin");
    else if(bmi>=18.5 && bmi<24) printf("standard");
    else if(bmi>=24) printf("too fat");
}
