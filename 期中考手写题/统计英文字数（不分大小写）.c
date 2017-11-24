#include <stdio.h>
int main(void){
unsigned int n[128]={0};//≥ı ºªØ
unsigned char c;
scanf("%c",&c);
while(c!='\n')
{
    if(c<128)
        n[c]++;
    scanf("%c",&c);


}
int i;
for(i=65;i<=90;i++){
    if(n[i]||n[i+32])
        printf("%c:%d\n",i,n[i]+n[i+32]);

}
return 0;



}

