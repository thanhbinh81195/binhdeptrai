#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu n = ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	int j,k;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0){
		j++;
		if(k<j){
		k=j;
		}
		}else{
			j=0;
		}
	}
	printf("so luong so duong lien tiep nhieu nhat la %d",k);
	return 0;
}
