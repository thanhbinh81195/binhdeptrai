#include <stdio.h>
int main(){
	printf("thay the gia tri am bang gia tri 0\n");
	int n;
	printf("nhap so phan tu a[i]\nn = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("so thu %d la ",i+1);
		scanf("%d",&a[i]);
		if(a[i]<0){
			a[i]=0;
			printf("thay so thu %d = %d\n",i+1,a[i]);
		}
	}
	return 0;
}
