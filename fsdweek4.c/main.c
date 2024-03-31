#include <stdio.h>
int main()
{
//switch,case,break,default
char character;
printf("Enter any letter : ");
scanf("%c",&character);
switch(character){
     case 'a':
         printf("This is a vowel");break;

     case 'e':
         printf("This is a vowel");break;

     case 'i':
         printf("This is a vowel");break;

     case 'o':
         printf("This is a vowel");break;

     case 'u':
         printf("This is a vowel");break;
     default:
        printf("this is a consonant");
}
getch();
}
