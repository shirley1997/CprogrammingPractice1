#include <stdio.h>
#include <string.h>
void f(char *);
int main(void){

    char s1[30],s2[30],s3[30],tmp;
    int i,j;
    gets(s1);
    gets(s2);
    gets(s3);
    f(s1);
    printf(" ");
    f(s2);
    printf(" ");
    f(s3);
    return 0;
}

void f(char *s){
if(*s!='\0'){
    f(s+1);
    putchar(*s);



}

}

