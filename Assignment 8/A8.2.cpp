#include <stdio.h>
int fibonacy(int unsigned n){
	int x1=1,x2=1,x3=2;
	for(int i=3;i<n;i++)
	{
		x1=x2;
		x2=x3;
		x3=x2+x1;
	}
	return x3;
}
int main(){
	int n;
	printf("tim so thu n trong day Fibonacy\n");
	printf("n = ");
	scanf("%d",&n);
	printf("so Fibonacy thu %d la %d",n,fibonacy(n));
	return 0;
}
