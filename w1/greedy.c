#include<stdio.h>
float ask_amount()
{

	float amount;
	scanf("%f",&amount);

	while(amount<=0)
	{
		printf("How much change is owed?\n");
		scanf("%f",&amount);
	}
	return amount;
}

void main()
{
	int coins=0,temp=0,i=0,amount;
	float am;
	int money[5]={25,10,5,1};
	printf("O hai! How much change is owed? \n");
	am=ask_amount();
	amount=(int)(am*100);
	while(amount!=0)
	{
		if(amount>=money[i])
		{
			temp=(amount/money[i]);
			amount=(amount%money[i]);
			coins=coins+temp;
		}
		else
		{
			i++;
		}
	}
	printf(" \n %d \n ",coins);
}

