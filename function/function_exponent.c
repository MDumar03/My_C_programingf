#include<stdio.h>

int calculatepower(int base,int exp)
{
int result=1,i;
for(i=1; i<=exp; i++){
result=result*base;
}
printf("%d",result);
}

int main(){
int base,exp;

printf("enter base :");
scanf("%d",&base);

printf("enter Exponent :");
scanf("%d",&exp);

 calculatepower(base,exp);





return 0;
}
