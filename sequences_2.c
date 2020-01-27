#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 5
int main()
{
	int  data[MAX];
	int i,csc=0,msc=0,ssum=0,msum=0;
	srand(time(0));
	for(i=0;i<MAX;i++)
	{
		data[i]=rand()%200-100;
		printf("%d\t",data[i]);
	}
	for(i=0;i<MAX;i++)
	{
		if(data[i]<0||i==MAX-1)
		{
			if(csc>msc)
			{
				msc=csc;
				msum=ssum;
			}
			else if(csc==msc)
				msum+=ssum;
			csc=0;
			ssum=0;
		}
		else
		{
			csc++;
			ssum+=data[i];
		}
	}
	if(csc>msc)
	{
		msc=csc;
		msum=ssum;
	}
	else if(csc==msc)
		msum+=ssum;
	printf("\n%d",msum);
}
