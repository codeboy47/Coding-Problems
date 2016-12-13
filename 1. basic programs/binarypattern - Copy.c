
//-------- Ques print pattern in binary form
#include<stdio.h>
int main(void)
{
	int i=1,j,N;
	printf("enter no");
	scanf("%d",&N);
	while(i<=N)
	{
		j=1; 
		if(i%2!=0)
		{
			while(j<=i)
			{
				if(j%2==1)
				printf("1");
				if(j%2==0)
				printf("0");
				j++;
			}
		}
		if(i%2==0)
		{
			while(j<=i)
			{
				if(j%2==1)
				printf("0");
				if(j%2==0)
				printf("1");
				j++;
			}
		}
		printf("\n");
		i++;
	}
return 0;
}
