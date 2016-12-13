
//Ques7.print best pos to stand in line so that you got selected,ass-1,coding blocks using power function created by AK7
#include<stdio.h>
int main(void)
{
	int N,c=2,val=2,a;
	printf("enter no of applicants");
	scanf("%d",&N);
	while(val<N)
	{
		val=val*c;
	
	}
	a=power(2,4);
	printf("best pos is %d %d",val/2,a);
return 0;	
}
int power(int val,int n)
{
	int i=1,c;
	c=val;
	while(i<n)
	{	
		val=val*c;
		i++;
	}
	return val;
}
