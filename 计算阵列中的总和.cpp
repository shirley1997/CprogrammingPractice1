#include <stdio.h>
int main()
{
    int a[10]={1,3,5,4,7,2,99,15,45,52};
    int i;
    int total=0;
    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);}

        for(int i=0;i<10;i++){
            scanf("%d", total);
            total+=a[i];

        }
        printf("总和为:\n", total);

    }
