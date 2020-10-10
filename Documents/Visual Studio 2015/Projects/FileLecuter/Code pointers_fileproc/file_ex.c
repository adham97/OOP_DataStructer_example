#include<stdio.h>
intmain()
{
intx =3;
charstr[] ="Hello";
floaty = 3.6;
FILE *fp;
if((fp = fopen("myFile.txt", "w")) == NULL)
printf("File could not be opened");
else
{
fprintf(fp," %d \n", x);
fprintf(fp," %s \n", str);
fprintf(fp," %f \n", y);
}
fclose(fp);
return0;
}
