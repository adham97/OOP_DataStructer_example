#include <stdio.h>
#include <stdlib.h>
int main (){
   FILE *in;
   in = fopen("file_ex2.c","r");
   if(in == NULL){
      printf("Error: Failed to open file_ex2.c\n");
      exit(1);
    }
   char ch;
   while(fscanf(in,"%c",&ch) != EOF)
       printf("%c",ch);
   
   fclose(in);   
   return 0;
}
