#include<stdio.h>  // with argument with return type
int sum(int ,int);
int main(void){
    int x,y;
    printf("Enter two numbers to sum up ");
    scanf("%d %d",&x , &y);
    int c= sum(x,y);
    printf("Sum of two numbers is %d",c); 
    return 0;
}

int sum(int a,int b){
    // printf("Enter two numbers to sum up ");
    // scanf("%d %d",&x , &y);
    int z=a+b;
    return z;
}