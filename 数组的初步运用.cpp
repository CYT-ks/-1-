/*
дһ����������������ȷ����[0,9]��Χ�ڵ�������ͳ��ÿһ�����ֳ��ֵĴ���������-1��ʾ����
*/
#include<stdio.h>
int main(void)
{
	const int number=10;/*�����С*/
	int x;
	int count[number];/*��������*/
	int i;
	for(i=0;i<number;i++)
	{
		count[i]=0;/*��ʼ������*/
	}
	scanf("%d",&x);
	while(x!=-1)
	{
		if(x>=0 && x<=9)
		{
			count[x]++;/*�����������*/
		}
		scanf("%d",&x);
	}
	for(i=0;i<number;i++)
	{
		printf("%d;%d\n",i,count[i]);/*�����������*/
	}
	return 0;
}