#include<stdio.h>
#include<stdlib.h>

void create(void);
void display(void);
int count(void);
void insertAtBegin(void);      
void insertAtEnd(void);  
void insertAtPos(void);    

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL,*temp; 

void main(){
   int ch,len;
   while(1){

   printf("\n1. Append\n");
   printf("2. Display\n");
   printf("3. Count\n");
   printf("4. Insert at beginning\n");
   printf("5. Insert at end\n");
   printf("6. Insert at specific position\n");
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
        case 4: insertAtBegin();        
                break;
        case 5: insertAtEnd();
                break;         
        case 6: insertAtPos(); 
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

void insertAtBegin(void){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to insert at beginning : ");
    scanf("%d",&newnode->data);
    newnode->next = newnode->prev = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
       newnode->next = head;
       head = newnode;    
    }
    printf("\n%d is added successfully at beginning\n",newnode->data);
}      

void insertAtEnd(void){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to insert at end : ");
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
        newnode->prev = temp;
        temp->next = newnode;
    }
   printf("\n%d is added successfully at end\n",newnode->data);
}  

void insertAtPos(void){
    int i=1,pos;
    printf("\nAfter which position you want to insert a node : ");
    scanf("%d",&pos);
    int len = count();
    if(pos > len){
        printf("WARNING : Exceeded the limit Linked List ");
    }
    else{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to insert at %d position : ",pos);
    scanf("%d",&newnode->data);
    newnode->next = newnode->prev = NULL;
        temp = head;
        while(i<pos){
            temp = temp->next;
            i++;
        }
        newnode->prev = temp->prev;
        newnode->next = temp;
        printf("Added successfully at %d position ",pos);
    }
}    