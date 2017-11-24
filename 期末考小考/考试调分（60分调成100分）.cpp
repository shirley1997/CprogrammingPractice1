#include <stdio.h>
int main()
{
    int a,minScore=9999,maxScore=-9999;
    int scores[60];
    for(int i=0;i<60;i++){
        scanf("%d", &a);
        scores[i]=a;
        if(a>maxScore) maxScore=a;
        if(a<minScore) minScore=a;


    }
    for(int i=0;i<60;i++){
        int ans=(100-60)*(scores[i]-minScore)/(float)(maxScore-minScore)+60+0.5;
        printf("%d\n",ans);


    }


}
