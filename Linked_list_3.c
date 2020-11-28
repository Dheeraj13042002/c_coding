#include<stdio.h>
#include<stdlib.h>

void Append(void);
void Display(void);
void Insert_at_begin(void);
void Insert_at_end(void);
void Insert_at_pos(void);
int Length(void);
void Delete_from_begin(void);
void Delete_from_end(void);
void Delete_from_pos(void);

struct node{
    int data;
    struct node* next;
};
struct node *head = NULL,*newnode,*temp;
int main(void){
    int ch,len;
    while(1){
    printf("\nEnter your choice\n");
    printf("1. Append\n");
    printf("2. Insert at beginning\n");
    printf("3. Insert at end\n");
    printf("4. Insert at specific position\n");
    printf("5. Delete from beginning\n");
    printf("6. Delete from end\n");
    printf("7. Delete from specific position\n");
    printf("8. Display\n");
    printf("9. Length\n");
    printf("10. Quit\n");

      printf("Enter your choice : ");
      scanf("%d",&ch);

    switch(ch){
    case 1:Append();
            break;
    case 2:Insert_at_begin();
            break;
    case 3:Insert_at_end();
            break;        
    case 4:Insert_at_pos();
            break;        
    case 5:Delete_from_begin();
            break;
    case 6:Delete_from_end();
            break;
    case 7:Delete_from_pos();
            break;        
    case 8:Display();
            break;
    case 9:len = Length();
            printf("\nLength of linked list is %d ",len);
            break;
    case 10: exit(0);
    default: printf("\nAisa toh koi option nahi h\n");
      }     
    }
}
void Append(void){
    
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp->next != NULL){
        temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("Added sucessfully");
}

void Display(void){
    temp = head;
    if(head == NULL){
        printf("Empty List\n");
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

void Insert_at_begin(void){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to add at beginning : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;
        newnode->next = temp;
        head = newnode;
    }
    printf("\nNode added successfully at beginning\n");
}

void Insert_at_end(void){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data to add at end : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;   
    if(head == NULL){
        head = newnode;
    }
    else{
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("\nNode added successfully at end\n");
}

void Insert_at_pos(void){
    int pos, i=1;
    printf("\nAfter which position you want to insert a node : ");
    scanf("%d",&pos);

    int len = Length();

    if(pos > len){
        printf("WARNING : You have exceeded the limit of List\n ");
    }
    else{
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data ");
        scanf("%d",&newnode->data);
        newnode->next = NULL;
        temp = head;
        while(i<pos){
            temp = temp->next;
            i++; 
        }
        newnode->next = temp->next;
        temp->next = newnode;
        printf("node at %d added successfully",pos);
    }
}

int Length(void){
   int count = 0;
   temp = head;
    while(temp != NULL){
        temp = temp->next; 
        count++;
    }
    return count;
}

void Delete_from_begin(void){
    if(head == NULL){
        printf("\nPhele se khaali h. kya delete karu\n ");
    }
    else{
    struct node *xyz;
    temp = head;
    xyz = temp->next;
    head = xyz;
    free(temp);
    printf("\nFirst node deleted successfully\n");
    }
}
void Delete_from_end(void){
    if(head == NULL){
        printf("\nPhele se khaali h. kya delete karu\n ");
    }
    else{
        struct node *xyz;
        temp = head;
        while(temp->next != NULL){
            xyz = temp;
            temp = temp->next;
        }
        if(temp == head){
            head = NULL;
        }
        else{
            xyz->next = NULL;
        }
        free(temp);
        printf("\nLast node deleted successfully\n");
    }
}

void Delete_from_pos(void){
    int pos,len,i=1;
    struct node *xyz;
    printf("\nFrom where you want to delete a node : ");
    scanf("%d",&pos);
    len = Length();
    if(pos > len){
        printf("\nWARNING : You have exceeded the list limit\n");
    }
    else{
        temp = head;
        if(pos == 1){
            xyz = temp;
            xyz = xyz->next;
            head = xyz;
        }
        else{
        while(i<pos){
            xyz = temp;
            temp = temp->next;
            i++;
        }
        xyz->next = temp->next;
        }
        free(temp);
        printf("node at %d position deleted successfully",pos);
    }
}