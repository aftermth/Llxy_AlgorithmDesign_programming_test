#include<stdio.h>
void main()
{
    int numb,b,c;
    printf("������һ����λ��\n");
    scanf("%d",&numb);
    for(b=0;b<numb/100;b++)
        printf("B");
    for(b=0;b<(numb/10%10);b++)
        printf("S");
    for(b=1;b<=(numb%10);b++)
    {
        printf("%d",b);
    }

}
