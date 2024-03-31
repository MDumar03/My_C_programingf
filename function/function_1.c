// a functions component- Return_type            function_name (argument/parameter )
//                                            int/char/ float           sum                    (int a, int b)
                                                 //return a+b;

#include<stdio.h>

/*
 int sum (int a,int b){
  return a+b;
 }
 int main(){

printf("The sum is : %d\n",sum(45,90));

printf("The sum is : %d",sum(23,43));
 }
*/
void sum(int a,int b,int c)
{
printf("THe sum is :%d\n",a+b+c);
}

void sub(int x,int y){
printf("The sub is : %d",x-y);
}
int main(){
sum(10,40,50);
sum(20,40,76);
sub(40,60);
}
