/*
ʱ�䣺2018��4��13��18:24:44
���ã�ͳ�Ƹ��������е����ֳ��ֵĴ���
*/

# include <stdio.h>
# include <string.h>
int main(void)
{
	char a[1010];
	int i;

	scanf("%s", &a);

	for(i = 1000 ; i <= 1009 ; i++)
		a[i] = 0;

	i = strlen(a) -1;

	while (i != -1)
	{
		a[1000 + (a[i] - '0')]++;
		i--;
	}

	for(i = 1000 ; i < 1010 ; i++)
		if(a[i] != 0)
			printf("%d:%d\n",i-1000,a[i]);

	return 0;
}