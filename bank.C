#include<stdio.h>
#include<string.h>
int main(){

char cr[ ] ="2003";
char pin[10];
printf("Enter Your 4 Digits PIN :  ");
scanf("%s",&pin);

if(strcmp(cr,pin)==0){
printf("Press here to Countinue ");
}
else if(strcmp(cr,pin)!=0){
    printf("Wrong PIN, Please try Again. \n\n");
      char pin[10];
      printf("Enter Your 4 Digits PIN  (WARNING : FOR  SECOND  TRY) :  ");
      scanf("%s",&pin);

      if(strcmp(cr,pin)!=0){
    printf("Wrong PIN, Please try Again\n\n");
      char pin[10];
      printf("Enter Your 4 Digits PIN (WARNING : FOR  LAST TRY) :  ");
      scanf("%s",&pin);}



      if(strcmp(cr,pin)!=0){
    printf("YOUR CARD HAS BLOCKED. CONTACT WITH THE BANKS AUTHORITY !!!\n\n");
      }

     else{
        printf("Correct PIN . Press here to Countinue");
        }


//else{

    //printf("This is not valid");
//}


}




 return 0;
}

