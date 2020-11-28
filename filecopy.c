#include<stdio.h>
int main(void){
    FILE *ptr1,*ptr2;
    int ch;
    ptr1=fopen("table.txt","r");
    ptr2=fopen("output.txt","w");
    ch=fgetc(ptr1);
    while(ch!=EOF){
        fputc(ch,ptr2);
        // ch=fgetc(ptr1);
    }
    printf("copied");
    return 0;
}