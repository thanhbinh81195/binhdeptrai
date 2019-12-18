#include <stdio.h>
int main(){
	int n;
	printf("so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int x,j=0;
	printf("x = ");
	scanf("%d",&x);
	for(int i=0;i<n;i++)
	{
		if(a[i]==x){
			printf("%d nam o vi tri a[%d]",x,i);
			break;
			}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==x){
		j++;
		}
	}
	if(j==0){
		printf("x khong thuoc mang");
	}
	return 0;
}
