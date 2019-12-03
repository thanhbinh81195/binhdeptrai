#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	float d,x,x1,x2;
	printf("giai phuong trinh a^2+bx+c=0\n");
	printf("a = \n");
	scanf("%d",&a);
	printf("b = \n");
	scanf("%d",&b);
	printf("c = \n");
	scanf("%d",&c);
	if(a==0){
		x=-c/b;
		printf("phuong trinh co nghiem x = %f",x);
	}else{
		d = b*b-4*a*c;
		if(d<0){
			printf("phuong trinh vo nghiem");
		}else{
			if(d>0){
				x1 = (-b+sqrt(d))/(2*a);
				x2 = (-b-sqrt(d))/(2*a);
				printf("phuong trinh co 2 nghiem x1 = %f; x2 = %f",x1,x2);
			}else{
				x1 = -b/(2*a);
				printf("phuong trinh co 2 nghiem x1 = x2 = %f",x1);
			}	
		}	
	}	
	}
