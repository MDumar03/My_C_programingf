#include<stdio.h>
int  main(){

int num[ 100],n=8,i;
//printf("Enter How many numbers are there : ");
//scanf("%d",&n);

 for(i=0 ;i<n; i++){
    scanf("Enter the numbers : %d",&num[i]);
}
int max = num[0];
for(i=1; i<n; i++){
    if(max < num[i])
        max = num[i];
}
printf("MAXIMUM NUMBER : %d",max);
return 0;
}
