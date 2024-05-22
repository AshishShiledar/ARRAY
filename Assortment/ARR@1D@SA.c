#include<stdio.h>
#include<conio.h>
void main()
{
int arr[5],no,i;
printf("Enter Value \n");
scanf("%d",&no);
for(i=0;i<no;i++)
{
	scanf("%d",&arr[i]);
	}	
	printf("\n Value is \n ");
for(i=0;i<no;i++)
{
printf("%d",&arr[i]);	
	}
	getch();	
}