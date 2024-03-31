#include<stdio.h>



int squre(int a)
{
   return a*a;
}



int main(){

int num;
printf("Enter Any Integer : ");
scanf("%d",&num);

int value=squre(num);
printf("The answer is : %d",value);


return 0;
}
