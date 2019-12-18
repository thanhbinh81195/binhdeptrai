#include <stdio.h>
int main(){
	int a[4][3], b[4][3], c[4][3], d[4][3];
	printf("nhap cac phan tu cua ma tran A\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nma tran A =");
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
	}
	printf("\nnhap cac phan tu cua ma tran B\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nma tran B =");
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<3;j++)
		{
			printf("%d  ",b[i][j]);
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			d[i][j]=a[j][j]-b[i][j];
		}
	}
	printf("\nma tran C = A + B =");
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<3;j++)
		{
			printf("%d  ",c[i][j]);
		}
	}
	printf("\nma tran D = A - B =");
	for(int i=0;i<4;i++)
	{
		printf("\n");
		for(int j=0;j<3;j++)
		{
			printf("%d  ",d[i][j]);
		}
	}
	return 0;
}
