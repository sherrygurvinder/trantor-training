#include<stdio.h>

void main()
{

int n,i,j;
printf("ENTER THE HEIGHT: ");
scanf("%d",&n);

for(i=n;i>0;i--)
{
for(j=0;j<=n;j++)
{
if(j<=i-2)
{
printf(" ");
}
else
{
printf("#");
}
}
printf("\n");
}
}
