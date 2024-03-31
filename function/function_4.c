#include<stdio.h>
int main(){

double base,expo,result;

printf("Enter base : ");
scanf("%lf",&base);

printf("Enter Exponent : ");
scanf("%lf",&expo);


result=pow(base,expo);
printf("%.1lf",result);






return 0;
}
