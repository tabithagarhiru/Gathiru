
//Processor directive  scanf () printf();
#include <stdio.h>
int main() {

int age;
float salary;

printf ("please enter your age");
scanf("%d", &age);

printf("please enter your salary");
scanf("%f", &salary);

if(age <21& salary>21000) {
printf ("congratulations you qualify for the loan");
} else {
printf ("unfortunately, we are unable to offer you a loan at this time");
}
return 0; 
}