#include <stdio.h>
#include <stdlib.h>

int main() {

   int dividend = 20;
   int divisor = 0;
   int quotient;
 
   if( divisor == 0) {
      printf("Division by zero! Exiting...\n");
      exit(EXIT_FAILURE);
   }
	
   quotient = dividend / divisor;
   printf("Value of quotient : %d\n", quotient );

   exit(EXIT_SUCCESS);
}