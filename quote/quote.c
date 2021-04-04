#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   char quote[200];
   int rand_nu;
   FILE *qptr;
   int i;

   if ((qptr = fopen("quote.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
    srand(time(0));
    rand_nu = (rand() %8 );
    if(0 == rand_nu)
    	rand_nu++;
    
   for( i = 0; i < rand_nu;i++)
   {
   	fscanf(qptr,"%[^:]%*c", quote);
   	
   }
   printf("******Motivation********\n%s\n", quote);
   fclose(qptr); 
  
   return 0;
}
