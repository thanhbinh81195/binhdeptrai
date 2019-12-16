#include <stdio.h>
int main(){
	printf("nhap 10 so le\n");
	int a[10];
	for(int i=0;i<10;i++)
	{
		do{
			printf("so le thu %d la ", i+1);
			scanf("%d; ",&a[i]);
		}while(a[i]%2==0);
	}
	return 0;
}
