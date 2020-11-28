#include<stdio.h>
#include<stdlib.h>
int main(void){

    struct student{
    int rollno;
    char name[20];
    // int *c= &rollno;
};
  struct student std;
  // std=(struct student*)malloc(sizeof(struct student));
  printf("Enter data ");
  scanf("%d",&std.rollno);
  printf("Roll no of student is %d\n",std.rollno);
  // printf("Name of the student is %s\n",std.name);
  // printf("Address  %d\n",std->rollno);
  return 0;
}