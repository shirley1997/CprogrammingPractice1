#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int y=1;y<=n;y++){
        for(int i=0;i<y;i++)
            printf("*");
        printf("\n");

    }
}
