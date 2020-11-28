#include<stdio.h>
int main(void){
    int ch;
    FILE* ptr1;
    FILE* ptr2;
    fopen("table.txt","r");
    fopen("copy.txt","w");

   while((ch=fgetc(ptr1))!=EOF){
       fputc(ch,ptr2);
       fputc(ch,ptr2);
       ch=fgetc(ptr1);
   }
   fclose(ptr1);
   fclose(ptr2);
    return 0;
}