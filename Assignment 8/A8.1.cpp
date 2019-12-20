#include <stdio.h>
bool timkiem(int x, int a[], int n){
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x){
			j++;
		}
	}
	if(j!=0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n;
	printf("nhap mang\n");
	printf("so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("nhap so can tim x = ");
	scanf("%d",&x);
	if(timkiem(x,a,n)){
		printf("%d nam trong mang",x);
	}else{
		printf("%d khong nam trong mang",x);
	}
	return 0;
}
