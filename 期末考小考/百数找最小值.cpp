#include <stdio.h>
int main()
{
    int array[100];
    int min,n;
    for(int i=0;i<100;i++){
            int a;
        scanf("%d", &a);
    array[i]=a;
    if(array[i]<min)
        min=array[i];
    }
    printf("%d", min);
}
