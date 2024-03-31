#include<stdio.h>
int main(){

int m[4][4]={
         {2,3,4,5,6},
         {6,7,8,9,1},
         {1,2,3,4,5},
         {5,6,7,8,9}
         };

int i;
    printf("|__|C1|C2|C3|C4|C5|\n");
    for(i=0;i<4;i++){
            printf("|R%i|%dM|%dM|%dM|%dM|%dM|\n",i+1,m[i][0],m[i][1],m[i][2],m[i][3],m[i][4]);
}




  return 0;
}
