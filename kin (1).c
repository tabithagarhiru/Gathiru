
//Processor directive  scanf () printf();
#include <stdio.h>
int main(){

float p, r, t ,si;
printf ("enter the principle amount, /n");
scanf ("%f", &p);
printf ("enter the rate");
scanf ("%f", &r);
printf ("enter time in years");
scanf ("%f", &t);
si=(p*r* t)/100;

printf ("si ,%f",si);

    return 0;
}