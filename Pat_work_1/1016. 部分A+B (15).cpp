/*
������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��

�ָ���A��DA��B��DB�����д�������PA + PB��

�����ʽ��

������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 10^10��

�����ʽ��

��һ�������PA + PB��ֵ��
��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
0
*/

# include <stdio.h>
# include <string.h>
int sore (char* p)
{
	int n, m, k;
	int abc;
	int mun=0;
	abc = strlen(p);	
	scanf("%d",&m);
	for (n = 0; n < abc; ++n)
	{
		if (*(p+n)-'0'==m)
			mun++;
	}
	int sum = 0;
	for (int i = 0; i < mun; i++)
	{
		if (i == 0)
		{
			sum = m;
		}
		else
		{
			sum = sum * 10 + m;
		}
	}
	return sum;
}


int main (void)
{
	int PA, PB;
	char A[1000], B[1000];
	
	scanf ("%s", A);	
	PA = sore (A);
	
	scanf ("%s", B);
	PB = sore (B);
	printf ("%d", PA+PB);
	
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
