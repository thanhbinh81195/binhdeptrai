#include <stdio.h>
int main(){
	int n,s1;
	printf("nhap so phan tu a[i] n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("so thu %d la ",i+1);
		scanf("%d",&a[i]);
		for (int j=0;j<i;j++)
		    {
		    	if(a[i]==a[j]){
		    		i--;
				}
			}
	}
	return 0;
}
