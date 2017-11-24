#include <stdio.h>
#include <string.h>
int main(void){
char s[30];
char *ptok;

gets(s);

ptok=strtok(s," ");
while(ptok){
    printf("%d\n",strlen(ptok));
    ptok=strtok(NULL," ");



}
return 0;

}
