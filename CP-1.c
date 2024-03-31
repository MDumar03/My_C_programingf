#include<stdio.h>
int main(){
int needle;
printf("Enter A number : ");
scanf("%d",&needle);
int i;
for(i=0;i<10;i++){
    if(i==needle){
        goto end;

    }
    else{
        printf("the current number %d\n",i);
    }
}
printf("loop terminated\n");
 end:printf("Jumped from goto statement\n");
getch();
}
