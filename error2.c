#include <stdio.h>       
#include <errno.h>       
#include <stdlib.h>       
#include <string.h>       
 
extern int errno;
 
void main()
{
    char *ptr = malloc( 1000000000UL);  //requesting to allocate 1gb memory space
    if (ptr == NULL)    //if memory not available, it will return null 
    {  
        puts("malloc failed");
        puts(strerror(errno));
        exit(EXIT_FAILURE);     //exit status failure
    }
    else
    {   printf("Done");
        free( ptr);
        exit(EXIT_SUCCESS);     //exit status Success      
    }
}