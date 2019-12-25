#include <stdio.h>
#include <math.h>
bool check(double a,double b,double c){
	if((a+b)>c && (a+c)>b && (b+c)>a){
		return true;
	}else{
		return false;
	}
}
double perimeter(double a,double b,double c){
	double p=a+b+c;
	return p;
}
double area(double a,double b,double c){
	double p=(a+b+c)/2;
	double s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	double a,b,c;
	printf("nhap 3 so\n");
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	double p=perimeter(a,b,c);
	double s=area(a,b,c);
	if(check(a,b,c)){
		printf("chu vi cua tam giac P = %lf\n",p);
		printf("dien tich cua tam giac S = %lf\n",s);
	}else{
		printf("day khong phai 3 canh cua mot tam giac");
	}
	return 0;
}
