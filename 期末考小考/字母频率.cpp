#include <stdio.h>
int ANS[26],ans[26];
int main()
{
    char c;
    while(scanf("%c", &c)==1){
        if(c>='A' && c<='Z') ANS[c-'A'] ++;
        if(c>='a' && c<='z') ans[c-'a'] ++;

    }
    for(int i=0;i<26;i++){
        if(ANS[i]!=0){
            printf("%c:%d\n",'A'+i,ANS[i]);
        }
    }
    for(int i=0;i<26;i++){
        if(ans[i]!=0){
            printf("%c:%d\n", 'a'+i,ans[i]);
        }
    }
}
