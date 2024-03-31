#include<stdio.h>
int main(){

int num[5];

int sum=0;
int i;


printf("Enter 5 number : ");
for(i=0;i<5;++i){


    scanf("%d",&num[i]);
    sum=sum+num[i];



}
printf("Total : %d\n",sum);
printf("Average : %d",sum/5);

getch();
}
