#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
/*
void main() {

	FILE * in = fopen("file_ex22.c", "r"); // bool T/F

	if (!in ) { // == '\0') { // F in == null or in == '\0'
		printf("Error: Failed to open file_ex2.c\n");
		exit(1);
	}
	
	char ch;
	while (fscanf(in, "%c", &ch) != EOF)  //  "hi "   in[0] = h , in[1] = i, in[2] = null or \0     i < 10
		printf("%c", ch);
	
	fclose(in);
	//return 0;
	system("pause");
}
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fp = fopen("test.txt", "r");
	if (!fp) {
		perror("File opening failed");
		return EXIT_FAILURE;
	}

	int c; // note: int, not char, required to handle EOF
	while ((c = fgetc(fp)) != EOF) { // standard C I/O file reading loop
		putchar(c);
	}

	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");

	fclose(fp);
	system("PAUSE");
}