#include<stdio.h>
void main(){
    int days,y,m,d,temp;
    printf("\nEnter no. of days : ");
    scanf("%d",&days);
    
    y = days/365;
    temp = days%365;
    m = temp/30;
    d = temp%30;

    printf("year : %d\n",y);
      printf("month : %d\n",m);
        printf("days : %d\n",d);
}