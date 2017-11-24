#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
            for(int j=0;j<=i-2;j++){
                printf(" ");
            }
        for(int y=1;y<=n;y++){
            printf("*");
        }
        for(int k=n;k>=i+1;k--){
            printf(" ");
        }
        printf("\n");

    }
}
