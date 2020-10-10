#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

void main() {
	FILE *comp;
	comp = fopen("num.txt", "r");
	if (comp == NULL) {
		printf("this file dose not exisit");
		//exit(1);
	}

	int c, number, big;
	number = 0;
	big = 0;
	c = fscanf(comp," %d", &number);
	printf("the bigst number is");
	while (c != EOF) {
		if (number > big)
			big = number;
	}
	printf("the bigst number is %d \n", big);
	fclose(comp);
	system("pause");
}