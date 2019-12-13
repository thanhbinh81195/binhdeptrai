#include <stdio.h>
int main(){
	printf("so Fibonacy gan nhat < n\n");
	int n;
	printf("n = ");
	scanf("%d",&n);
	if(n<2){
		printf("khong tim duoc");
	}else if(n<3){
		printf("so Fibonacy gan nhat < n la 1",n);
	}else if(n<4){
		printf("so Fibonacy gan nhat < n la 2",n);	
	}else{
		int x1=1, x2=1, x3=2;
		    for (;x3<n;)
		    {
		    x1=x2;
		    x2=x3;
		    x3=x1+x2;
	        }
	        printf("so Fibonacy gan nhat < n la %d",x3-x1);
	        }
	return 0;
}
