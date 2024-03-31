#include<stdio.h>
int main(){

char op;
printf("Enter any Operator ( +,-,*,/ ) :");
scanf("%c",&op);


double num1,num2;
printf("Enter 2 number: ");
scanf("%lf %lf",&num1,&num2);

switch(op){
case '+':printf("The operation is : %lf",num1+num2);break;
case '-':printf("The operation is : %lf",num1-num2);break;
case '*':printf("The operation is : %lf",num1*num2);break;
case '/':printf("The operation is : %lf",num1/num2);break;

default:printf("Not a valid operator !!!");
}
getch();
}
