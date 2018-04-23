# 이진 탐색(Binary Search)
* 오름차순으로 정렬된 리스트에서 특정한 위치의 알고리즘을 찾는 알고리즘
* 탐색대상이 절반씩 줄어드므로 시간복잡도는 *O(logn)*이 된다.


## 소스코드
* 종료조건 
    * first가 end보다 크면 종료
    * 배열에서 num을 찾아낸경우
```C
#include<stdio.h>
int ar[]={1,3,5,7,9,11,13,15,17};
int num;
BSearch(int len, int num)
{
	int first=0;
	int end=len-1;
	int mid=0;
	
	while(first<=end)
	//first<end일경우 마지막 하나남았을때 검사하지 않고 종료된다.
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

```
