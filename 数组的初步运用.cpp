/*
写一个程序，输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束
*/
#include<stdio.h>
int main(void)
{
	const int number=10;/*数组大小*/
	int x;
	int count[number];/*定义素组*/
	int i;
	for(i=0;i<number;i++)
	{
		count[i]=0;/*初始化数组*/
	}
	scanf("%d",&x);
	while(x!=-1)
	{
		if(x>=0 && x<=9)
		{
			count[x]++;/*数组参与运算*/
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++)
	{
		printf("%d;%d\n",i,count[i]);/*遍历数组输出*/
	}
	return 0;
}