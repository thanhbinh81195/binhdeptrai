#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int min,j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0){
			j++;
		}
	}
	if(j==0){
		printf("khong co so duong nao");
	}else{
	for (int i=0;i<n;i++)
	{
		if(min>a[i] && a[i]>0){
			min=a[i];
		}
	}
	printf("so duong nho nhat la %d",min);
    }
	return 0;
}
