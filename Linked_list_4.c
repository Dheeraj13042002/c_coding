#include<stdio.h>
#include<stdlib.h>

void create(void);
void display(void);
int count(void);

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL,*temp; 

void main(){
   int ch,len;
   while(1){
   printf("\n1. append\n");
   printf("2. display\n");
   printf("3. count\n");
   printf("10. QUIT\n");
   printf("Enter your choice : ");
   scanf("%d",&ch);

    switch(ch){
        case 1: create();
                break;
        case 2: display();
                break;
        case 3: len = count();
                printf("\nLength of Linked List is %d",len);
                break;
        case 10: exit(0);    
                break;    
        default:printf("\nYou have entered wrong option\n ");        
    }
   }
}

void create(void){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = newnode->prev = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    printf("\nAdded sucessfully\n ");
}

void display(void){
       temp = head;
    if(head == NULL){
        printf("\nEmpty List\n");
    }
    else{
      while(temp != NULL){
          printf("%d",temp->data);
          temp = temp->next;
          if(temp != NULL)
          printf("-->");
      }
  }
}

int count(void){
    int count = 0;
    temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}