#include <stdio.h>
int main(){
	printf("tinh TBC cac so le trong mang\n");
	int n,a[n];
	printf("so phan tu n = ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("so thu %d la ",i+1);
		scanf("%d",&a[i]);
	}
	int s=0, j=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0){
			s+=a[i];
			j+=1;
		}
	}
	printf("Trung binh cong cac so le TBC(le) = %f",float(s)/j);
	return 0;
}
