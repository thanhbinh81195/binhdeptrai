#include <stdio.h>
#include <string.h>
bool kiemtrachuoi(char a[][50], int unsigned n, char b[]){
	for (int i=0;i<n;i++)
	{
			if((strcmp(a[i],b))==0){
				return true;
			}
	}
	return false;
}
int main(){
	int n;
	printf("nhap so chuoi trong mang n = ");
	scanf("%d",&n);
	char a[n][50];
	for(int i=0;i<n;i++)
	{
		printf("chuoi %d: ",i+1);
		scanf("%s",a[i]);
	}
	char b[50];
	printf("nhap chuoi can kiem tra\n");
	scanf("%s",b);
	if(kiemtrachuoi(a,n,b)){
		printf("chuoi co nam trong mang");
	}else{
		printf("chuoi khong nam trong mang");
	}
	return 0;
}
