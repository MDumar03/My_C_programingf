#include<stdio.h>
 int main(){

 int sum=0,count=0;

 printf("enter 5 numbers : \n");

 do{
    int i;
    scanf("%d",&i);

    sum=sum+i*i;
    ++count;


 }while(count<5);
 printf("Total : %d",sum);









 getch();
}
