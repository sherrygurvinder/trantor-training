#include<stdio.h>
int ask_amount()
{
int amount;
scanf("%d",&amount);


while(amount<=0)
{
printf("enter valid amount");
scanf("%d",&amount);
}
return amount;
}
void main()
{
int coins=0,temp=0,amount,i=0;
int money[5]={25,10,5,1};
printf("Amount to return ");
amount=ask_amount();
while(amount!=0)
{
if(amount>=money[i])
{
temp=(amount/money[i]);
amount=(amount%money[i]);;

coins=coins+temp;

}
else
{
i++;
}
}
printf(" \n total no of coins is %d \n",coins);
}

