#include<stdio.h>

int sum(int a,int b,int c)
   {
    return a+b+c;
    }

int sub(int x,int y){
return x-y;
}


int main(){

  int result = sum(10,45,10);
  printf("The result is : %d\n",result);


  result = sum(10,4,50);
  printf("The result is : %d\n",result);

int minuss= sub(30,12);
printf("The sub is : %d",minuss);

return 0;
}
