#include <stdio.h>
int main(){
    int n, r;
    printf("in ra so nghich dao\n");
    printf("nhap so ban dau\n");
    scanf("%d", &n);
    int n1 = 0;
    while(n > 0){
        r = n % 10;
        n1 = n1 * 10 + r;
        n = n / 10;
    }
    printf("%d", n1);
}
 
