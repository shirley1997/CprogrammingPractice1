#include <stdio.h>
int num[100];
int main()
{
    for(int i=0;i<100;i++){
        scanf("%d", &num[i]);
    }

    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(num[i]>num[j]){
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }

        }

    }
    for(int i=0;i<100;i++){
        printf("%d", num[i]);
    }
}
