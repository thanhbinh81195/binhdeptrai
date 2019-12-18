#include <stdio.h>
int main(){
	int a[6]={4,2,6,1,8,0};
	for(int i=1;i<5;i++)
	{
		// tim so lon va day ve cuoi mang
		for(int j=0;j<6-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d \t",a[i]);
	}
	return 0;
}
