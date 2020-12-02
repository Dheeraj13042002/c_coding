//Queue implementation using Linked List
#include<stdio.h>
#include<stdlib.h>

void enqueue(void);
void dequeue(void);
void display(void);
void peek(void);

struct node{
    int data;
    struct node *link;
};
struct node *front = NULL, *rear = NULL;
struct node *newnode;

void main(){
    int ch;
    while(1){
    printf("\n1. enqueue\n");
    printf("2. dequeue\n");
    printf("3. display\n");
    printf("4. peek\n");
    printf("5. QUIT\n");
    printf("Enter the choice : ");
    scanf("%d",&ch);

    switch(ch){
    case 1 : enqueue();
    break;
    case 2 : dequeue();
    break;
    case 3 : display();
    break;
    case 4 : peek();
    break;
    case 5 : exit(0);
    break;
    default : printf("\nInvalid option\n");
    }

    }
}

void enqueue(void){
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&newnode->data);
    newnode->link = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }
    else{
        rear->link = newnode;
        rear = newnode;
    }
    printf("\n%d is added sucessfully\n",newnode->data);
}

void dequeue(void){

    if(front == NULL && rear == NULL){
        printf("\nEmpty Queue\n");
    }
    else{
        // printf("\n%d is deleted suceessfully\n",front->data);
        struct node *temp;
        temp = front;
        if(temp == rear){
            printf("\n%d is sucessfully deleted\n",temp->data);
            front = NULL;
            rear = NULL;
        }
        else{
        printf("\n%d is sucessfully deleted\n",temp->data);    
        front = front->link;
        free(temp);
        }
    }
}

void display(void){
    struct node *temp;
    if(front == NULL && rear == NULL){
        printf("\nEmpty node\n");
    }
    else{
    temp = front;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->link;
    }
  }
}

void peek(void){
   if(front == NULL && rear == NULL){
       printf("Empty Queue. No peek value");
   }
   else{
    printf("\n%d is a peek value\n",front->data);
}
}