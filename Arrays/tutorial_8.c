#include<stdio.h>
int main(){

/*
task_3
printf("Enter temperature of 5 cities !\n");
  int i,temp[5];

for(i=0;i<5;i++){
    scanf("%d",&temp[i]);
}

for(i=0;i<5;i++){

    printf("Tempereture of city %d : %d\n",i+1,temp[i]);
}
*/
// Task_4
int i;
char arrA[]={'k','a','s','r','a'};
char arrB[5];

for(i=0;i<5;i++){
    arrB [i]=arrA[i];
}
printf("B= ");
   for(i=0;i<5;i++){
    printf("%c",arrB[i]);

   }





return 0;
}
