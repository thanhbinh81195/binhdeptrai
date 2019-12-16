#include <stdio.h>
int main(){
	printf("in ra cac so le trong mang\n");
	int n;
	printf("so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("so thu %d la ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0){
			printf("%d; ",a[i]);
		}
	}
	return 0;
}
