#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("a = \n");
	scanf("%d",&a);
	printf("b = \n");
	scanf("%d",&b);
	printf("c = \n");
	scanf("%d",&c);
	int P = a + b + c;
	float P1 = P/2;
	float S = sqrt(P1*(P1-a)*(P1-b)*(P1-c));
	if(((a+b)>c) && ((a+b)>c) && ((b+c)>a)){
		printf("a, b, c la 3 canh cua 1 tam giac");
		printf("chu vi cua tam giac P = %f\n",P);
		printf("dien tich cua tam giac S = %f\n",S);
	}else{
		printf("a,b,c khong tao nen 1 tam giac");
	}
	}
