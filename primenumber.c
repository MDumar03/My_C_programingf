#include<stdio.h>
int main(){
int number,count;
 printf("Enter any number :");
 scanf("%d",&number);
 if(number<=1){
  count++;
 }
 for(int i=2;i<number;i++)
  {
   if(number%i==0){
     count++;
     break;
      }
   }
  if(count==0){
    printf("%d is a Prime number.",number);
  }
  else{
    printf("%d is not a prime number.",number);
  }
getch();
}
