
//--------- Ques.8 enter x,y and find which no is located at that coordinates from assignment -1 coding blocks
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("enter x");
	scanf("%d",&x);
	printf("enter y");
	scanf("%d",&y);
	if(x%2==1 && y%2==1 && (x==y || y==x-2))
	printf("%d",(x+y-1));
	else if(x%2==0 && y%2==0 && (x==y || y==x-2))
	printf("%d",x+y);
	else
	printf("SORRY WRONG CO-ORDINATES");

return 0;
}
