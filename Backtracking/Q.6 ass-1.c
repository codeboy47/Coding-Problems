#include<stdio.h>
int main(){
	int start=0,end=100,i,j=0,a[100],n,x,y;
	int d=1000;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==x){
			start=i;
			printf("start=%d",start);
		}
		if(a[i]==y){
			end=i;
			printf("end=%d",end);
		}
		if((end-start) < d){
			d=end-start;
			if(d<0){
				d = (-1)*d;	
			}
		}
	}
	printf("\nd=%d",d);
	return 0;
}
