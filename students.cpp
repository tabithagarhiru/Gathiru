#include <stdio.h>

struct student {
    char name[50];
    int marks;
};
    int main () {
    struct student students[5];
    FILE*fptr;
fptr =fopen("students.txt","w");
    
    if(fptr==NULL) {
        printf("Error opening the file\n");
        return 1;
    }
    //input for the student 
    for(int a = 0;a < 5;a++) {
        printf("Enter name and marks of the student%d:",a + 1);
        scanf("%s %d",students[a].name,&students[a].marks);
    
        fprintf(fptr,"Name: %s Marks:%d\n",students[a].name,students[a].marks);
    }
    
    fclose(fptr);
        printf("Data written to the student.txt");
        return 0;
    }