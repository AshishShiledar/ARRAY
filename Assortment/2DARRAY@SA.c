#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2]={{10,20},{30,40}};
int b[2][2]={{1,2},{3,4}};


int i,j;                                                                                                                                 
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	
	{
	printf("%d \t",a[i][j]);
	}
	printf("\n");
	}
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	
	{
	printf("%d \t",b[i][j]);
	}
	printf("\n");
	}
	printf("sum of A&B is \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	
	{
	printf("%d \t",a[i][j]+b[i][j]);
	}
	printf("\n");
	}				
	getch();	
}