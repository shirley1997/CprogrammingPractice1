#include <stdio.h>
int num[100];
int main()
{
    for(int i=0;i<100;i++){
        scanf("%d", &num[i]);
    }
    for(int i=0;i<100;i++){
        for(int j=i+1;j<100;j++){
            if(num[i]>num[i+1]){
                int temp=num[i];
                num[i]=num[i+1];
                num[i+1]=temp;
            }
        }
    }
    for(int i=0;i<100;i++){
        printf("%d", num[i]);
    }
}
