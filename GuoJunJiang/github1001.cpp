#include<stdio.h>
int main()
{
int a,b,cnt;
cnt=0;
printf("������һ��С��1000������:");
scanf("%d",&a);
	while(a!=1)
	{
		if(a%2==0)
		{a=a/2.0;
		cnt++;}
		else
		{a=(3*a+1)/2.0;	
		cnt++;}
	}
printf("����Ҫ%d���õ�1\n",cnt);
return 0;
}