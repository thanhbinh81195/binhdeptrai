#include <stdio.h>
void hanglonnhat(int a[4][4]){
	int s=0,max=0,hangmax;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			s+=a[i][j];
		    if(s>max){
			    max=s;
			    hangmax=i;
		    }
		    s=0;
		}
	}
	printf("\nhang co tong gia tri lon nhat la\n");
	for(int j=0;j<4;j++)
	{
		printf("%d\t",a[hangmax][j]);
	}
}
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
		for(int j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	hanglonnhat(a);
	return 0;
}
