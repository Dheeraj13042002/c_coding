#include<stdio.h>
#include<stdlib.h>

void create(void);

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL; 

void main(){
    printf("Do you want to insert a node\n.Press 0 to exit ");
    scanf("%d",&ch);
    while(ch){
    create();
    }
}

void create(void){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data\n");
    scanf("%d",&newnode->data);
    newnode->next = newnode->prev = NULL;
    if(head == NULL){
        head = newnode;
    }
    else{
        struct node *temp;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}



