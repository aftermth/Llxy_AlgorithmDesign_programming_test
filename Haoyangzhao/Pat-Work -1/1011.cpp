/*
ʱ�䣺2018��4��12��21:04:52
����:����n�����ݣ�abc���ж�a+b��c�Ĵ�С
*/
# include <stdio.h>
int main(void)
{
	int n,i;
	long long a[10][3];

	scanf("%d",&n);

	for(i = 0 ; i < n ; i++)
		scanf("%lld%lld%lld",&a[i][0],&a[i][1],&a[i][2]);

	for(i = 0 ; i < n ; i++)
	{
		if(a[i][0] + a[i][1] > a[i][2])
			printf("Case #%d: true\n",i+1);
		else
			printf("Case #%d: false\n",i+1);
	}

	return 0;
}