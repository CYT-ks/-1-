/*
ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n;
	printf("'water flower'number is:");
	for(n=100;n<1000;n++)
	{
		i=n/100;
		j=n/10%10;
		k=n%10;
		if(n==i*i*i+j*j*j+k*k*k)
		{
			printf("%-5d",n);
		}
	}
	printf("\n");
	return 0;
}

   

		
	



	