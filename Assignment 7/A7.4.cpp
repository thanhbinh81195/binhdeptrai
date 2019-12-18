#include <stdio.h>
int main(){
	int a[4][3], b[3][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran A =\n");
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<3;j++)
		{
		printf("%d  ",a[i][j]);
		}
	}
	printf("\nMa tran chuyen vi AT =\n");
	for(int i=0;i<3;i++)
	{
		printf("\n");
		for(int j=0;j<4;j++)
		{
			printf("%d  ",a[j][i]);
		}
	}
	return 0;
}
