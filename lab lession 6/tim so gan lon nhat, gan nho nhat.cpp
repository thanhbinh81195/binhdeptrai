#include <stdio.h>
int main(){
	int n;
	printf("so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i)
	{
		printf("a%d = ",i+1);
		scanf("%d",&a[i]);
	}
	int max, min; 
	max=min=a[0];
	for (int i=1;i<n;i++)
	{
		if(max<a[i]){
			max=a[i];
		}
		if(min>a[i]){
			min=a[i];
		}
	}
	int max2, min2;
	max2=min2=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<max){
			max2=a[i];
			break;
		}
    }
	for(int i=0;i<n;i++)
	{
		if(a[i]>min){
			min2=a[i];
			break;
		}
    }
	for(int i=0;i<n;i++)
	{
		if(max2<a[i] && a[i]<max){
			max2=a[i];
		}
		if(min2>a[i] && a[i]>min){
			min2=a[i];
		}
	}
	printf("so gan lon nhat la %d\n",max2);
	printf("so gan nho nhat la %d",min2);
	return 0;
}
