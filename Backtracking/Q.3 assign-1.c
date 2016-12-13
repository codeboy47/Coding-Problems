#include<stdio.h>
void f(int *a,int n){
	int b[100],j=0,i;
	for(i=0;i<n;i++){
			if(a[i]%2==0){
				b[j++]=a[i];
			}
	}
	for(i=0;i<n;i++){
			if(a[i]%2==1){
				b[j++]=a[i];
			}
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
int main(){
	int i,j=0,a[100],b[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	f(a,n);
	return 0;
}
