#include<stdio.h>
#include<stdlib.h>

void push(void);
void pop(void);
void dispay(void);
void peek(void);

struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;

void main(void){
    int c;
    while(1){
    printf("\n1. Push (insert)\n");
    printf("2. Pop (delete)\n");
    printf("3. Display\n");
    printf("4. Peek\n");
    printf("5. QUIT\n");
    printf("Enter your choice ");
    scanf("%d",&c);
     switch(c){   
    case 1: push();
           break;
    case 2:pop();
           break;
    case 3:dispay();
           break;   
    case 4:peek();
           break;          
    case 5:exit(0);
           break;       
    default: printf("\nAisa koi option hi nahi h\n");       
     }
    }
}

void push(void){
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&temp->data);
    temp -> next = top;
    top = temp;
    printf("\n%d pushed successfully\n",temp -> data);
}

void pop(void){
    if(top == NULL){
        printf("\nEmpty stack\n");
    }
    else{
    struct node *temp;
    temp = top;
    printf("\n%d poped out successfully\n",top->data);
    top = top->next;
    temp->next = NULL;
    free(temp); 
  }
}

void dispay(void){
    if(top == NULL){
        printf("\nNothing to display. Empty Stack\n");
    }
    else{
    struct node *temp;
    temp = top;
    while(temp != NULL){
        printf("%d\n",temp->data);
        temp = temp->next;
    }
  }
}

void peek(void){
    if(top == NULL){
        printf("Empty Stack");
    }
    else{
        printf("\nPeek element is %d\n",top->data);
    }
}