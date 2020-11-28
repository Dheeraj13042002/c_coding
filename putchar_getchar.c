#include<stdio.h>     //with arguments without return type
void sum(int* ,int* );    //call by reference
int main(void){
    int a,b;
    printf("Enter two numbers to sum up ");
    scanf("%d %d",&a,&b);
    sum(&a,&b);
    return 0;
}
void sum(int* a,int* b){
    int z=*a+*b;
    printf("Sum of two numbers is %d",z);
}