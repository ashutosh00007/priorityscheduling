#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char p[10][5],temp[5];
	int i,j,pt[10],wt[10],totwt=0,pr[10],temp1,n;
	float avgwt;
	printf("Enter no of girls:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter girl %d name:",i+1);
  		scanf("%s",&p[i]);
		printf("enter process time:");
		scanf("%d",&pt[i]);
		printf("enter no of gifts:");
		scanf("%d",&pr[i]);
	}
