#include <stdio.h>
int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    int n;
    scanf("%d", &n);
    for(int a=1;a<n;a++){
        for(int b=a+1;b<n;b++){
            for(int c=b+1;c<n;c++){
                if(a*a+b*b==c*c){
                    if(gcd(a,b)==1 && gcd(b,c)==1 && gcd(a,c)==1){
                        printf("%d,%d,%d\n", a,b,c);
                    }
                }
            }
        }
    }
}

