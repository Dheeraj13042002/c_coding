//Implementation of stack using a circular Linked List
#include<stdio.h>
#include<stdlib.h>

void dequeue();
void enqueue();
void display();
void peek();

struct node{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;

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

void enqueue(){
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data to add : ");
    scanf("%d",&newnode->data);
    
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }  
    else{
        rear->next = newnode;
        rear = newnode;
    }
     newnode->next = front;
     printf("\n%d is successfully added\n",newnode->data);
}

void dequeue(){

    struct node *temp;
    temp = front;
    if(front == NULL && rear == NULL){
        printf("\nEmpty Queue.\n");
    }
    else{
        printf("\n%d is deleted successfully\n",temp->data);
        if(temp == rear){
            free(temp);
            front = rear = NULL;
        }
        else{   
        front = temp->next;
        free(temp);
       }
    }    
}

void display(){
    if(front == NULL && rear == NULL){
        printf("\nEmpty Queue\n");
    }
    else{
        struct node *temp;
        temp = front;
        while(temp != rear){
            printf("%d\n",temp->data);
            temp = temp->next;
        }
        printf("%d\n",rear->data);
    }
}

void peek(){
   if(front == NULL && rear == NULL){
        printf("\nEmpty Queue\n");
    }
    else{
        printf("\n%d is peek value\n",front->data);
    }
}