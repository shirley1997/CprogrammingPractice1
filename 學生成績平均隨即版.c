#include <stdio.h>
int main()
{
    unsigned int counter;
    int grade;
    int total;
    float average;
    total=0;
    counter=0;
    printf("%s", "enter the grade, -1 to end:" );
    scanf("%d", &grade);
    while(grade!=1){
          total=total+grade;
          counter=counter+1;
          printf("%s", "enter the grade,-1 to end:" );
          scanf("%d", &grade);}
          if (counter!=0){
            average=(float)total/counter;
            printf("class average is %.2f\n", average);
          }
          else{
            puts("No grades were entered" );
          }


    }
