#include <stdio.h>
int main(){
	int a[10];
	for(int i=0;i<10;i++)
	{
		printf("a%d = ",i);
		scanf("%d",&a[i]);
		int s=0;
		for(;a[i]!=0;)
		{
			s=s*10+a[i]%10;
			a[i]/=10;
		}
		printf("nghich dao cua a[%d] la %d\n",i,s);
	}
	return 0;
}
