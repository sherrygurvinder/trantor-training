#include<stdio.h>
int get_int()
{
int amount;
scanf("%d",&amount);


while(amount<=0)
{
printf("enter positive no");
scanf("%d",&amount);
return amount;
}

