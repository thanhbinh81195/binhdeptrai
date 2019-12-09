#include <stdio.h>
int main(){
	int a,b,c,max;
	printf("a = \n");
	scanf("%d",&a);
	printf("b = \n");
	scanf("%d",&b);
	printf("c = \n");
	scanf("%d",&c);
	max = a;
	if(max<b){
		max = b;
		if(max<c){
			max = c;
			printf("max=%d",max);
		}else{
			printf("max=%d",max);
		}	
	}else{
		if(max<c){
			max = c;
			printf("max=%d",max);
		}else{
			printf("max=%d",max);
	}
	}
	}
