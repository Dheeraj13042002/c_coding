//Queue implementation with array
// Various Operations
#include<stdio.h>
#include<stdlib.h>

#define N 5
int queue[N];
int rear = -1,front = -1;

void enqueue(void);
void display(void);
void dequeue(void);
void peek(void);

void main(){
      int ch;
   while(1){
       printf("\n1. enqueue\n");
       printf("2. display\n");
       printf("3. dequeue\n");
       printf("4. peek\n");
       printf("5. QUIT\n");
       printf("Enter your choice : ");
       scanf("%d",&ch);
       switch(ch){
           case 1:enqueue();
                  break;
           case 2:display();
                  break;
           case 3:dequeue();
                  break;       
           case 4:peek();
                  break;       
           case 5:exit(0);
                  break;
           default:printf("\nPassed wrong key\n");                     
       }
   }
}

void enqueue(){
    int x;
    printf("\nEnter the value to insert : ");
    scanf("%d",&x);
    if(rear == N-1){
        printf("\nOverflow condition\n");
    }
    else if(rear == -1 && front == -1){
        rear = front = 0;
         queue[rear] = x;
         printf("\n%d is enqueued successfully\n",x);
    }
    else{
        rear++;
         queue[rear] = x;
         printf("\n%d is enqueued successfully\n",x);
    }
}

void dequeue(void){
    if(rear == -1 && front == -1){
        printf("\nEmpty Queue.\n");
    }
    else if(rear == front){
        printf("\n%d is removed\n",queue[front]);
        rear = front = -1;
    }
    else{
        printf("\n%d is removed\n",queue[front]);
        front++;
    }
}

void display(void){
    if(rear == -1 && front == -1){
        printf("\nEmpty Queue\n");
    }
    else{
    for(int i = front ; i <= rear ; i++){
        printf("%d\n",queue[i]);
    }
    }
}

void peek(void){
    if(rear == -1 && front == -1){
        printf("\nEmpty queue\n");
    }
    else{
        printf("Peek element is %d",queue[front]);
    }
    
}