#include <stdio.h>
#include <stdlib.h>
struct node
    {
        int data;
        struct node *next;
    };
     struct node *newnode, *head, *temp;
    void display(struct node *temp);
void main()
{
    int choice;
    // struct node *newnode, *head, *temp;
    head = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(1/0) ");
        scanf("%d", &choice);
    }

    temp = head;
    display(temp);
    //Insert a node in Linked List in beginning
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("\n");
    printf("Enter the value you want to add(press 0 to exit) ");
    scanf("%d", &choice);
    if (choice)
    {
        scanf("%d", &newnode->data);
        newnode->next = head;
        head = newnode;
        temp = head;
    }
    display(temp);
    // while(temp!=NULL){       //Display all the numbers
    // printf("%d ",temp->data);
    // temp=temp->next;
    // }
}
void display(struct node *temp)
{
    while (&temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}