#include <stdio.h>
int main()
{
    int year, start, leap;
    scanf("%d%d", &year,&start);
    if(year&400) leap=1;
    else if(year%100) leap=0;
    else if(year%4) leap=1;
    else leap=0;

    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int m, d;
        scanf("%d%d",&m,&d);
    if(m<1 || m>12) printf("-1 ");
    else if(d<1) printf("-2 ");
    else if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>31) printf("%d ", (start+d) % 7);
    else if((m==4 || m==6 || m==9 || m==11) && d>30) printf("-2 ");
    else if((m==2) && d>28+leap) printf("-2 ");
    else if(m==1) printf("%d ", (start+d-1) % 7);
    else if(m==2) printf("%d ", (start+d+31-1) %7);
    else if(m==3) printf("%d ", (start+d+31+28+leap-1) %7);
    else if(m==4) printf("%d ", (start+d+31+28+leap+31-1) %7);
    else if(m==5) printf("%d ", (start+d+31+28+leap+31+30-1) %7);
    else if(m==6) printf("%d ", (start+d+31+28+leap+31+30+31-1) %7);
    else if(m==7) printf("%d ", (start+d+31+28+leap+31+30+31+30-1) %7);
    else if(m==8) printf("%d ", (start+d+31+28+leap+31+30+31+30+31-1) %7);
    else if(m==9) printf("%d ", (start+d+31+28+leap+31+30+31+30+31+31-1) %7);
    else if(m==10) printf("%d ", (start+d+31+28+leap+31+30+31+30+31+31+30-1) %7);
    else if(m==11) printf("%d ", (start+d+31+28+leap+31+30+31+30+31+31+30+31-1) %7);
    else if(m==12) printf("%d ", (start+d+31+28+leap+31+30+31+30+31+31+30+31+30-1) %7);
    //if(d>31) printf("-2 ");

    }

}

