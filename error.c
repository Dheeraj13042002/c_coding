#include<stdio.h>
#include<errno.h>
#include<string.h>
int main(void){
    FILE *ptr;
    int errnum;
    ptr=fopen("Pandya.txt","rb");
    if(ptr ==NULL){
        errnum =errno;
        fprintf(stderr,"Value of error number is %d\n",errno);
        perror("Error printed by perror ");
        fprintf(stderr,"Error opening file %s\n",strerror(errnum));
    }
    else{
        fclose(ptr);
    }
    return 0;
}