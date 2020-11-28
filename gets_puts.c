// without args with return type
#include<stdio.h>
int sum(void);
int main(void){
    int c= sum();
    printf("Sum of two numbers is %d ",c);
    return 0;
}
int sum(void){
    int a,b,c;
    printf("Enter two numbers to sum up ");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}