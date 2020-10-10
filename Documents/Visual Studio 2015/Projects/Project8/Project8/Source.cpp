#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

void main() {
	FILE * in = fopen("file_ex2.c", "r");
	if (!in) {
		printf("Error: Failed to open file_ex2.c");
		exit(1);
	}
	char ch;
	while (fscanf(in, "%c", &ch) != EOF)
		printf("%c", ch);

	fclose(in);

	//return 0;
	system("pause");
}
