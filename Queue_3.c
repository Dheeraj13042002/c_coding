//Circular Queue implementation using Arrays
#include<stdio.h>
#include<stdlib.h>
#define N 5
int arr[N];
int front = -1 , rear = -1;

void enqueue(void);
void dequeue(void);
void display(void);
void peek(void);

int main(void){
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
   return 0;
    
} 

void enqueue(void){
    int x;
   
   
    if(rear == -1 && front == -1){
         printf("Enter value to add : ");
          scanf("%d",&x);
        front = rear = 0;
        arr[0] = x;
          printf("\n%d is added successfully\n",x);
    }
    else if((rear+1)%N == front){
        printf("Queue is fulled.");
    }
    else{
         printf("Enter value to add : ");
          scanf("%d",&x);
        rear = (rear+1)%N;
        arr[rear] = x;
          printf("\n%d is added successfully\n",x);
    }

}

void dequeue(){
    
    if(rear == -1 && front == -1){
        printf("\nEmpty Queue\n");
    }
    else if(rear == front){
        printf("\n%d is deleted\n",arr[front]);
        front = rear = -1;
    }
    else{
        printf("\n%d is deleted\n",arr[front]);
        front = (front+1)%N;
    }
}

void display(){
    if(front == -1 && rear == -1){
        printf("\nEmpty Queue\n");
    }
       
        else{
        int i = front;  
        while(i != rear){
        printf("%d\n",arr[i]);
           i = (i+1)%N;
        }
       printf("%d\n",arr[rear]);
    }
 
}

void peek(void){
     if(front == -1 && rear == -1){
            printf("\nQueue is empty\n");
        }
    else{
    printf("\nPeek element is %d\n",arr[front]);
    }
}