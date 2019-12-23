#include <stdio.h>
#include <string.h>
bool kiemtra(char a[], char b[]){
	int j=0,k=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==b[j]){
			j++;
			if(j>k){
				k=j;
			}
		}else{
			j=0;
		}
	}
	if(k==strlen(b)){
		return true;
	}
	return false;
}
int main(){
	char s1[50],s2[50];
	printf("nhap chuoi s1\n");
	scanf("%s",s1);
	printf("nhap chuoi s2\n");
	scanf("%s",s2);
	if(kiemtra(s1,s2)){
		printf("chuoi s1 co chua chuoi s2");
	}else{
		printf("chuoi s1 khong chua chuoi s2");
	}
	return 0;
}
