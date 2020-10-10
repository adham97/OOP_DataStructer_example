#define _CRT_SECURE_NO_DEPRECATE 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void main() {
	FILE *infile;

	infile = fopen("marks.txt", "r");
	if (!infile) {
		printf("this file dosn't exist ");
		//break;
		//exit(1);
	}

	float  sum ,mark;
	int count,status;
	sum = 0.0;
	mark = 0.0;
	count = 0;
	status = fscanf(infile, "%f", &mark);
	while (status != EOF) {
		status = fscanf(infile, "%f", &mark);
		sum += mark;
		count++;
	}
	float avg = sum / count;
	printf("sum %f \n", sum);
	printf("sum %d \n", count);
	printf("avareg %f \n", avg);
	
	fclose(infile);

	system("PAUSE");
}