#include <stdio.h>
int main(){
	int a,b,c,min;
	printf("a = \n");
	scanf("%d",&a);
	printf("b = \n");
	scanf("%d",&b);
	printf("c = \n");
	scanf("%d",&c);
	min = a;
	if(min>b){
		min = b;
		if(min>c){
			min = c;
			printf("min=%d",min);
		}else{
			printf("min=%d",min);
		}	
	}else{
		if(min>c){
			min = c;
			printf("min=%d",min);
		}else{
			printf("min=%d",min);
	}
	}
	}
