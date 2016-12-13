#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j=0,a[100],b[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=0;
  	while(i<n)
  	{
    	if(a[abs(a[i])]>=0)
      		a[abs(a[i])]=(-1)*a[abs(a[i])];
    	if(a[abs(a[i])]<0)
      		printf("%d ",abs(a[i]));
  		i++;
	}
	return 0;
}
