#include<stdio.h>
int main(){

int num;
printf("Enter Number : ");
scanf("%d",&num);

int temp=num;
int r,sum=0;

while(temp!=0){
    r=temp%10;
    sum=sum*10+r;
    temp=temp/10;
}

printf("The reverse of Number %d = %d",num,sum);







  getch();
}
