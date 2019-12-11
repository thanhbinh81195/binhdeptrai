#include <stdio.h>
int main(){
	printf("kiem tra 3 canh tam giac\n");
	int a,b,c;
	a=0;
	b=0;
	c=0;
	while ((a+b<=c) || (a+c<=b) || (b+c<=a))
	{
		printf("nhap 3 canh a, b, c\n");
	    scanf("%d\n",&a);
	    scanf("%d\n",&b);
	    scanf("%d",&c);
	 }
    printf("a , b, c la 3 canh cua tam giac");
    return 0;
}
