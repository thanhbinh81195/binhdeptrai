#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
	    scanf("%d",&a[i]);
	}
	int le;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0){
		le=a[i];	
		}
	}
	printf("so le cuoi cung la %d",le);
	return 0;
}

