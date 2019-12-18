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
	int s=0, max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0){
			s+=a[i];
			if(max<s){
				max=s;
			}
		}else{
			s=0;
		}
	}
	printf("chuoi cac so duong co tong lon nhat la %d",max);
	return 0;
}
