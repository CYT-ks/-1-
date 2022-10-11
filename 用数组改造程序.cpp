#include<stdio.h>
int main()
{
	int x;
	double sum=0;
	int count=0;
	int number[100];/*定义数组*/
	scanf("%d",&x);
	while(x!=-1)
	{
		number[count]=x;/*对数组中的元素赋值*/
		//
		{
			int i;
			printf("%d\t",count);
			for(i=0;i<=count;i++)
			{
				printf("%d\t",number[i]);
			}
			printf("\n");
		}
		//
		sum += x;
		count++;
		scanf("%d",&x);
	}
	if(count>0)
	{
		int i;
		double average=sum/count;
		for(i=0;i<count;i++)
		{
			if(number[i]>average)/*使用数组中的元素*/
			{
				printf("%d",number[i]);/*遍历数组*/ 
			}
		}
	}
	return 0;
}



