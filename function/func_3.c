#include<stdio.h>

int calcu(int a,int b)
{
     return 0.5*a*b;
}

int main(){

int height,base;
printf("Enter height : ");
scanf("%d",&height);

   printf("Enter Base: ");
   scanf("%d",&base);

   int sum=calcu(height,base);
printf("The area of triangle is : %d",sum);


return 0;
}
