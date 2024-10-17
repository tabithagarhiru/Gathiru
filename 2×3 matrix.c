#include <stdio.h>
int main () {
int i,t;
int marks [2][3]={{50,90,60},{40,70,40}};
for (i=0;i<2;i++) {
for (t=0;t<3;t++) {
printf ("marks [%d] [%d] =%d\n",i, t, marks [i][t]);
}
}
return 0;
}
