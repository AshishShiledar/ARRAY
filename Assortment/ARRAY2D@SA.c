#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2]={{10,20},{30,40}};
int i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	
	{
	printf("%d \t",a[i][j]);
	}
	printf("\n");
	}	
	getch();	
}