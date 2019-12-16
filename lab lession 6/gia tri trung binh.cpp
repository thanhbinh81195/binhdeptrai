#include <stdio.h>
int main(){
	printf("tinh gia tri TB cua 10 so\n");
	int ary[10], s;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&ary[i]);
	}
	for(int i=1;i<10;i++)
	{
	s+=ary[i];
    }
    printf("gia tri trung binh cua 10 so la %f",float(s)/10);
	return 0;
}
