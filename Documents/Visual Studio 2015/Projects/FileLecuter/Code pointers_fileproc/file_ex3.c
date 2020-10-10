#include <stdio.h>
#include <stdlib.h>
int main(void) {
   FILE *infile;
   double score, sum, average;
   int count, status; 
   infile = fopen("scores.txt", "r");
   if(infile == NULL){
      printf("Error: Failed to open scores.txt\n");
      exit(1);
    }
    sum = 0;
    count = 0;
    status = fscanf(infile, "%lf", &score);
    while(status!= EOF){
       sum += score;
       count++;
       status = fscanf(infile, "%lf", &score);
    }
    if(count == 0) 
        printf("Error: No grades read");
    else{  
        average = sum / count;
        printf("\nSum of the scores is %f\n", sum);
        printf("Average score is %.2f\n", average);
    }
    fclose(infile);
    return 0;
}

