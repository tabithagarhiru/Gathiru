#include <stdio.h>
int main () {
int i,t,k ;
int marks [2][2][3]={ {{50,90,60},{40,70,40}}, {{50,90,60},{40,70,40}} };
for (i=0;i<2;i++) {
for (t=0;t<2;t++) {
for(k=0;k<3;k++) {
printf ("marks [%d] [%d] [%d] =%d\n",i, t, k,marks [i][t][k]);
}
}
}
return 0;
}
