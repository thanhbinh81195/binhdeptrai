#include <stdio.h>
int main(){
	int n;
	printf("tinh tong S = 1+1/2+1/3+...+1/n\n");
	printf("nhap so nguyen n =");
	scanf("%d",&n);
	float S = 0;
	for(int i=1;i<=n;++i)
	{
	S = S + 1/float(i);
    }
    printf("tong S = %f",S);
	return 0;
}
