#include <stdio.h>
int main(){
	printf("in ra so thu n trong day Fibonacy\n");
	int n;
	printf("n = ");
	scanf("%d",&n);
	if(n<0){
		printf("khong tim duoc");
	}else if(n<2){
		printf("tong %d so dau tien la 1\n",n);

	}else if(n<3){
		printf("so thu %d la %d",n,1);
		printf("tong %d so dau tien la 2\n",n);
	}else if(n<4){
		printf("so thu %d la %d",n,2);
		printf("tong %d so dau tien la 4\n",n);

	}else{
		int x1=1, x2=1, x3=2;
		int j = 4, s=4;
		for (int i=4; i<=n; ++i)
		{
		x1=x2;
		x2=x3;
		x3=x1+x2;
		    for(;j<=i;++j)
		    {
			s=s+x3;
		    }
	    }
	    	printf("so thu %d la %d\n",n,x3);
	    	printf("tong %d so dau tien la %d",n,s);
    }
	return 0;
}
