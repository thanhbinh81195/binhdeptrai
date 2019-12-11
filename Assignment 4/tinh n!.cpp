#include <stdio.h>
int main(){
	printf("tinh ket qua n!\n");
	int n, S;
	printf("n = ");
	scanf("%d",&n);
	S=1;
	for(int i=1;i<=n;++i)
	{
		S*=i;
		}
    printf("n! = %d",S);
	return 0;
}
