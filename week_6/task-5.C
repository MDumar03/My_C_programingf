#include<stdio.h>
int main(){

int sum=0,count=0;

printf("Enter % number : \n");

do{
    int i;
    scanf("%d",&i);

    sum+=i;
    ++count;
}while(count<5);
 printf("Total %d :",sum);













   return 0;
}
