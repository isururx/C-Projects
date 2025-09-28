#include <stdio.h>

void main(){

int age ;
char name[50] ;

printf("Enter your name : ");
scanf("%s",name);

printf("Enter your age : ");
scanf("%d",&age);

printf("\n Hello %s ! You are %d years old !", name, age);

}
