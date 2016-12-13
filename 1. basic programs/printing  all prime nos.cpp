#include<stdio.h>
int main(void)
{
	int i=2,j=3,N,sum=0,count=0;
	printf("enter no\n");
	scanf("%d",&N);
	printf("2,");
	while(j<=N)
	{
		i=2;
		while(i<j)
		{
			if(N==2)
			{
				printf("2");
			}
			else if(j%i==0)
			{
				count=1;
				break;
			}
			else
			{
				count=0;
				i++;
			}
		}
		if(count==0)
			printf("%d,",j);
		j++;
	}
return 0; 
}
