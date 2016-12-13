
//-----Ques. print all nos less than N which are part of fibonacci series
#include<stdio.h>
int main(void)
{
	int a=0,b=1,c=0,i=1,N;
	printf("enter no\n");
	scanf("%d",&N);
	while(c<N)
	{
		c=a+b;
		a=b;
		b=c;
		if(c < N)
		printf("%d\n",c);
	}
return 0;
}
