#include<stdio.h>
int main(void){
int i=2,j=2,N,sum=0,count=0;
printf("enter no\n");
scanf("%d",&N);
while(i<N)
{
	//j=2;
	if(N%i==0){
	printf("not prime");
	break;
	}
	else
	i++;	
}
if(i>=N)
printf("prime");
return 0; 
}
