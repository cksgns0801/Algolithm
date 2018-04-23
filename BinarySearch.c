#include<stdio.h>
int ar[]={1,3,5,7,9,11,13,15,17};
int num;
BSearch(int len, int num)
{
	int first=0;
	int end=len-1;
	int mid=0;
	
	while(first<=end)
	{
		mid=(first+end)/2;
		if(ar[mid]==num)
		{
			return mid;
		}
		else
		{
			if(ar[mid]>num)
			{
				end=mid-1;
			}
			else
			{
				first=mid+1;
			}
		}
	}
	return -1;
}
int main()
{
	int a,len=9;
	scanf("%d",&num);
	a=BSearch(len,num);
	if(a==-1){
		printf("error");
	}
	else{
		printf("Index Number:%d",a);
	}
}
