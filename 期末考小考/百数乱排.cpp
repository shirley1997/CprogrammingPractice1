#include <stdio.h>
#include <stdlib.h>
int num[100];

int main()
{
    for(int i=0;i<100;i++){
        scanf("%d", &num[i]);
    }

    for(int i=0;i<100;i++){
        int a=rand()%100;
        int b=rand()%100;
        int temp=num[a];
        num[a]=num[b];
        num[b]=temp;
    }
    for(int i=0;i<100;i++){
        printf("%d ", num[i]);
        if(i%10==9) printf("\n");
    }
}
