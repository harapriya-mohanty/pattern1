#include<stdio.h>
void main()
{
int n;
printf("How many times the loop will execute");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n-i;j++)
{
printf(" ");
}
for( int k=1;k<=i;k++)
{
printf("%d",k);
}
for ( int m=i-1;m>=1;m--)
{
printf("%d",m);
}
printf("\n");
}
}