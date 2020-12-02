#include<stdio.h>

void main(){
 int price1,price2;
 printf("\nEnter the price of Laptop : "); 
 scanf("%d",&price1);
 printf("\nEnter the price of Printer : "); 
 scanf("%d",&price2);
 price1 -= price1*15/100;
 price2 -= price2*10/100;

 printf("Total amount is %d",price1+price2);
}