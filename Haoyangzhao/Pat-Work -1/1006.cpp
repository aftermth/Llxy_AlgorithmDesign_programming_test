/*
ʱ��:2018��4��12��20:48:59
���ܣ���һ����λ������B����٣�S����ʮ��1...n�����λ�����
*/
# include <stdio.h>
int main(void)
{
	int n,unit,decade,hundred,i;

	scanf("%d",&n);

	unit = n % 10;
	decade = n / 10 % 10;
	hundred = n / 100 % 100;

	if(n >= 100)
		for(i = 0 ; i < hundred ; i++)
			printf("B");
	if(n >= 10)
		for(i = 0 ; i < decade ; i++)
			printf("S");
	for(i = 1 ;i <= unit ; i++)
		printf("%d",i);
	printf("\n");

	return 0;
}