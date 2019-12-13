#include <stdio.h>
#include <math.h>
int main(){
	printf("in ra cac so nguyen to < n\n");
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	if (n<=2){
		printf("khong co so nguyen to nao");
	}else{
	    for(int i=2; i<n;i++)
	        {
		    int j = 0;
	        for (int uoc = 2; uoc <= sqrt(i); ++uoc)
	            {
		        if (i%uoc==0){
			        j++;
			        }
				}
	        if (j==0){
			    printf("%d\n",i);
				}
			}
	}
	return 0;
}
