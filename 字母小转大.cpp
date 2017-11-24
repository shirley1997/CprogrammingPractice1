#include <stdio.h>
#include <ctype.h>
void convertToUppercase(char *sPtr);
int main()
{
    char string[]="cHaRaCters and $32.98";
    printf("The string after convertion is:%s\n",string);
    convertToUppercase(string);
    printf("\nThe string after convertion is:%s\n",string);
}
void convertToUppercase(char *sPtr){
while(*sPtr!='\0'){
    *sPtr=toupper( *sPtr);
    ++sPtr;

}

}

