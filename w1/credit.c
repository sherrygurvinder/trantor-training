#include<stdio.h>

long long int get_long_long()
{
long long int n;
printf("ENTER CREDIT CARD NO: ");
scanf("%d",&n);

while(n<=0)
{
printf("invalid re-enter :");
scanf("%d",&n);
}
return n;

}

void main()
{
int i=1,temp1=0,temp=0,sum=0,sum1,sum2,result=0,final;

long long int n,n1;
n=get_long_long();



while(n!=0)
{

n1=n%10;
n=n/10;
if(i%2==0)
{

temp=0;
temp=temp+n1;
temp=temp*2;
if(temp>=10)
{
sum1=temp/10;
sum2=temp%10;
sum=sum1+sum2;
result=result+sum;
}
else
{
result=result+temp;
}
}
else
{

temp1=temp1+n1;
}
i++;
}

final=temp1+result;

if(final%10==0)
{
printf("VALID \n");
}
else
{
printf("INVALID \n ");
}
}
