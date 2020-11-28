/*Stack implementation using array*/
#include<stdio.h>
#include<stdlib.h>
#define lim 5
int stack[lim], top=-1;
void push(int ele);
int isFull();
int isEmpty();
int pop();
void traverse();
void peek();
int main(void){
    int ch,item;
    while(1){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Traverse\n");
        printf("5.Quit\n");
        printf("Enter your choice ");
        scanf("%d",&ch);
      switch(ch){
        case 1:   
        printf("Enter the number you want to push\n");
        scanf("%d",&item);
        push(item);
        break;
        case 2:item=pop();
               if(item ==0){
                   printf("Stack is underflow\n ");
               }
               else{
                   printf("Popped item is %d\n",item);
               }
               break;
        case 3:peek();       
               break;
        case 4:traverse();
               break;
        case 5: exit(0);
        break;
        default:printf("Entered wrong option!!\n");
        }

    }
    return 0;
}
void push(int ele){
    if(isFull()){
        printf("Stack is overflow\n");
    }
    else{
        top++;
        stack[top]=ele;
        printf("%d pushed successfully\n",ele);
    }
}
int isFull(){
    if(top==lim-1){
        return 1;
    }
    else{
        return 0;

    }
}
int pop(){
    if(isEmpty()){
        return 0;
    }
    else{
        return stack[top--];
    }
}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void peek(){
    if(isEmpty()){
       printf("Stack is empty\n ");
    }
    else{
       printf("peek element is %d\n", stack[top]);
    }
}
void traverse(){
    if(isEmpty()){
        printf("Stack is empty\n");
    }
    else{
    for(int i=0;i<=top;i++){
        printf("%d\n",stack[i]);
    }
    }
}
