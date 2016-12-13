#include <stdio.h>
#include<stdlib.h>
struct days
{
    int buy;
    int sell;
};
void f(int *a, int n)
{
  	 if (n == 1)
        return;
 
    int count = 0; 
    days sol[n/2 + 1];
 
    int i = 0;
    while (i < n-1)
    { 
        while ((i < n-1) && (a[i+1] <= a[i]))
            i++;
        if (i == n-1)
            break;
        sol[count].buy = i++;
        while ((i < n) && (a[i] >= a[i-1]))
            i++;
        sol[count].sell = i-1;
         count++;
    }
    if (count == 0)
        printf("There is no such day\n");
    else
    {
       for (int i = 0; i < count; i++)
          printf("%d\t %d\n", sol[i].buy, sol[i].sell);
    }
 
    return;
}
int main()
{
    int i,j=0,a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    f(a, n);
    return 0;
}
