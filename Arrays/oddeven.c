#include<stdio.h>

int main(){
int input[10]={0,2,4,6,8,1,3,5,7,9 };
int even[10], odd[10];

 for(int i=0;i<10;i++){
       if(input[i]%2==0){
            even[i]=input[i];
             }
      else {
            odd[i]=input[i];
           }
         }




    printf("Even: %d");
          int i;
        for(int i=0;i<5;i++);{
            printf("%d ",even[i]);
        }
         printf("\n");
     printf("Odd: %d");
     for(int i=5;i<10;i++);{
        printf("%d",odd[i]);
     }





 return 0;
}
