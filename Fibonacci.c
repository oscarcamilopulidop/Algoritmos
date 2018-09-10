#include<stdio.h>

int main(){
	int n, a = 1, b = 2;
	printf("Ingrese n \n");
	scanf(" %i",&n);
	int i = 4;
	for(i;i<= n;i ++){
		b+= a;
		a = b - a;
	}
    if (n == 0) {
        printf("0");
    } else if (n == 1 || n == 2) {
        printf("1");
    } else {
	    printf("%i",b);
   }	
}
