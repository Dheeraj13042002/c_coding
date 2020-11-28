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
    int ch;
    printf("Do you want to insert a node\nPress 0 to exit (or any number to continue) ");
    scanf("%d",&ch);
    while(ch){
    create();
    printf("\nStill want to continue\nPress 0 to exit (or any number to continue) ");
    scanf("%d",&ch);
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
        struct node *temp;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    printf("\nAdded sucessfully\n ");
}



