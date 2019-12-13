#include <stdio.h>
int main(){
	printf("tinh tong cac so a->b\n");
	int a=1,b=0;
	while(!(a<b))
	{
	printf("nhap vao a, b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	}
	int s=0;
	for(int i=a;i<=b;i++)
	{
		s+=i;
	}
	printf("tong la %d",s);
	return 0;
}
