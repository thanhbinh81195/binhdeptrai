#include <stdio.h>
int main(){
	printf("in ra so thu n trong day Fibonacy\n");
	int n;
	printf("n = ");
	scanf("%d",&n);
	if(n<0){
		printf("khong tim duoc");
	}else if(n<3){
		printf("so thu %d la %d",n,1);
	}else if(n<4){
		printf("so thu %d la %d",n,2);
	}else{
		int x1=1, x2=1, x3=2;
		for (int i=4; i<=n; ++i)
		{
		x1=x2;
		x2=x3;
		x3=x1+x2;
	    }
	    	printf("so thu %d la %d",n,x3);
    }
	return 0;
}
