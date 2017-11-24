#include <stdio.h>
int main()
{
    int n=0,a[30],i,x;
    do{
        scanf("%d",&x);
        if(x>0){
            i=n-1;
            n++;
            while(i>=0 && a[i]>x){
                a[i+1]=a[i];
                i--;
            }
            a[i+1]=x;
            for(int i=0;i<n;i++){
                printf("%d ", a[i]);
            }
            printf("\n");
        }




    }
    while(x>0);
}
