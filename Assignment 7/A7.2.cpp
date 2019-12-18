#include <stdio.h>
int main(){
	int a[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<4;j++)
		{
			printf("%d  ",a[i][j]);
		}
	}
	int s=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i==j){
				s+=a[i][j];
			}
		}
	}
	printf("\nTrung binh cong duong cheo chinh = %f",float(s)/4);
	return 0;
}
