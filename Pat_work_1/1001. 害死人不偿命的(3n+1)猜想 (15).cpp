# include <stdio.h>
int main ()
{
	int sum, n;
	scanf ("%d", &n);
	for (sum = 0; n!=1; ++sum)
	{
		if (n%2==0)
		    n = n / 2;
		else 
			n=(3*n+1)/2;
	 }
	 printf ("���������ˣ�%d��", sum);
		
	return 0;
 } 
