#include <stdio.h>
int main() {
	
char name [50];
float marks;
FILE *fptr =fopen("c:\\name\\marks.txt","r");
 if (fptr==NULL){
	 printf("error opening the file");
 }	 
	 printf("\n enter name");
	 scanf("%s", &name);
	 
	 printf("enter marks");
	 scanf("%f", &marks);
	 
	 fprintf(fptr, "Name: %s\nMarks: %.2f\n", name, marks);

 fclose(fptr);
}