
#include <iostream>

using namespace std;

void main()
{
	FILE* fp = fopen("test.txt", "r");
	if (!fp) {
		perror("File opening failed \n");
		exit(1);
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