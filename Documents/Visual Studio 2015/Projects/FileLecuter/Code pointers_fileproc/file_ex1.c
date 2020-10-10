#include <stdio.h>
#include <stdlib.h>
#define KMS_PER_MILE 1.609

int main(void) {
	double kms, miles;
	FILE *infile, *outfile;

	infile = fopen("data.txt","r");
    if(infile == NULL){
      printf("Error: Failed to open data.txt\n");
      exit(1);
    }

	outfile = fopen("result.txt","w");
	fscanf(infile, "%lf", &miles);
	kms = KMS_PER_MILE * miles;
	fprintf(outfile, "%.2f miles equals %.2f kilometers.\n", miles, kms);
	printf( "%.2f miles equals %.3f kilometers.\n", miles, kms);
	fclose(infile);
	fclose(outfile);
	return 0;
}

