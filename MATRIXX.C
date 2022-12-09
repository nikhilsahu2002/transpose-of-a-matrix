#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],sub[3][3],i,j,mul,k;
clrscr();

	printf("Enter The First Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	/*
	printf("Enter The Second Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
		for(k=0;k<3;k++)
		{
			mul[i][j] +=a[i][k] * b[k][j];
		}
		}
	}
	printf("multiplication of a matric");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",mul[i][j]);
			printf("\n");
		}
	} */

	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");

	}

getch();
}
