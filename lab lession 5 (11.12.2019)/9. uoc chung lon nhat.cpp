#include <stdio.h>
int main(){
	printf("tim uoc chung lon nhat cua 2 so\n");
	int a,b;
	printf("nhap a va b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	int max=1;
	for(int u=1;u<=a;++u)
	{
		if(a%u==0 && b%u==0){
			for (;max<=u;max++)
			{
				max=u;
			}
		}
	}
	printf("UCLN cua a va b la %d",max-1);
	return 0;
}
