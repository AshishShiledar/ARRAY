#include<stdio.h>
#include<conio.h>
void main()
{
int row,column,i,j;
int a[row][column];
printf("Enter row");
scanf("%d",&row);
printf("Enter column");
scanf("%d",&column);
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
scanf("%d",&a[i][j]);
	}
}
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{	
printf("%d\t",&a[i][j]);	
	}
	getch();	
}
}