/*
本题要求编写程序，计算序列2/1+3/2+5/3+8/5+…的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。
输入格式:
输入在一行中给出一个正整数N。
输出格式:
在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。
输入样例:
20
输出样例:32.66
*/
#include<stdio.h>
int main()
{
	int n;
	double dividend,divisor;/*定义两个变量dividend，divisor为每一项的分子和分母。定义一个变量sum记录最终的结果。*/
	double sum=0.0;/*double sum = 0.0; 这样才是比较正规的写法。*/
	int i;
	double temp;/*是C99标准的数据类型*/
    scanf("%d",&n);
	n=2000;
	dividend=2.0;/*分子*/
	divisor=1.0;/*分母*/
	for(i=1;i<=n;i++)
	{
		sum+=dividend/divisor;/*把左边的数加上右边的数的和赋值给左边的数*/
		temp=dividend;/*分母是前一项的分子*/
		dividend=dividend+divisor;/*每一项的分子是前一项分子与分母的和*/
		divisor=temp;/*分母是前一项的分子*/
	}
	printf("%f %f\n",dividend,divisor);
	printf("%.2f\n",sum);
	return 0;
}

