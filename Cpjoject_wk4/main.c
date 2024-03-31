#include<stdio.h>

int main(){
int overtime,absent,sum;
char name[30];

printf("Enter Your NAME:");
scanf("%s",&name);

printf("Enter your over time work hours :");
scanf("%d",&overtime);

printf("Enter your Absent work hours : ");
scanf("%d",&absent);

sum=overtime-(2/3)*absent;


if(sum>40){
    printf("Bonus Paid 50$");
}

else if(sum>30 && sum<=40){
    printf("Bonus Paid 40$");


}



else if(sum>20 && sum<=30){
    printf("Bonus Paid 30$");

}


else if(sum>10 && sum<=20){
    printf("Bonus Paid 20$");

}



else{
    printf("Bonus Paid 10$");

}






getch();
}
