#include<stdio.h>
#include<stdlib.h>
int main(void){
    int choice;
    struct node{
        int data;
        struct node* next;
    };
    struct node *newnode,*head,*temp;
    head=NULL;
    while(choice){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL){
        head=temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode;
    }
    printf("Do you want to continue ");
    scanf("%d",&choice);
    }
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}