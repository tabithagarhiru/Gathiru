#include <stdio.h>
int main() {
int x,y,z;
int prize [2][2][2]= {{{10,20,30},{40,50,60}}, {{70,80,90}, {45,68,97}}};
for (x=0;x<2;x++) {
for(y=0;y<2;y++) {
for (z=0;z<3;z++){
printf ("prize [%d][%d][%d]=[%d] \n", x,y,z, prize [x][y][z]);
}
}
}
return 0;
}