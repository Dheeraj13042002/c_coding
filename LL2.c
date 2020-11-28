#include<stdio.h>
#include <stdlib.h>
int main(void){
    struct node{
        int data;
        struct node* next;
    };
    struct node *head,*newnode;
    head=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==0){
        head=newnode;
    }
    return 0;
}