n#include<stdio.h>

//Programa en C creado por Camilo Pulido
//Para ver el overflow que presenta cada tipo de dato; descomentar
//l bloque de código según corresponda y compilar.

int main(){

//SHORT Overflow en n = 24
/*
	short n = 0 , a = 1, b = 2;
	
	while(b>0){
		b+= a;
		a = b - a;
		n++;
	}
    printf("Con short hay overflow en n = %i\n",(n+3));//se suman +3 por los pasos iniciales que se hacen antes del while
*/
//INT: Overflow en n = 47
/*	int n = 0 , a = 1, b = 2;
	while(b>0){
		b+= a;
		a = b - a;
		n++;
	}
    printf("Con int hay overflow en n = %i\n",(n+3)); //se suman +3 por los pasos iniciales que se hacen antes del while
*/
//LONG Overflow en n = 47
/*	long n = 0 , a = 1, b = 2;
	while(b>0){
		b+= a;
		a = b - a;
		n++;
	}
    printf("Con long hay overflow en n = %i\n",(n+3));//se suman +3 por los pasos iniciales que se hacen antes del while
*/
//LONG LONG Overflow en n = 49
/*	long a = 0, b = 1, n = 90;//n es el (n-3)-esimo valor de fibo
	for(long i = 1;i < n; i++){
		long auxa = a;
		long auxb = b;
		a = b;
		b = auxa + auxb;
		if(b<0){
			printf("hay overflow en n = %i",(i+3));
			break;
		}
	}*/
	

}
