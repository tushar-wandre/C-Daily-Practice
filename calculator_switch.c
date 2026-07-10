#include<stdio.h>
int main(){
int choice;
printf("enter your choice from 1 to 3:\n");
scanf("%d",&choice);
switch(choice){

    case 1: printf("₹199 plan activated - 1 GB/day, 28 days");
    break;
    case 2: printf("₹199 plan activated - 2 GB/day, 28 days");
    break;
    case 3: printf("399 plan activated - 3 GB/day, 28 days");
    break;

default :printf("invalide choice:");
}
    return 0;
}