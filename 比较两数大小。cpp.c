#include <stdio.h>
int main()
{
    int num1;
    int num2;
    printf("enter two integers and I will tell you\n");
    printf("the relationship they satisfy: ");
    scanf("%d%d", &num1, &num2);
    if(num1=num2){
        printf("%d is equal to %d\n", num1, num2);
    }
    if(num1!=num2){
        printf("%d is not equal to %d\n", num1, num2);
    }

}
