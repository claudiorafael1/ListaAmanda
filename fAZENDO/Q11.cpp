/*11 - Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int a,b,c,aux;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite os tr�s n�meros");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		aux = b;
		b = a;
		a = aux;
	}if (a>c){
		aux = c;
		c=a;
		a=aux;
	}if (b>c){
		aux = c;
		c=b;
		b=aux;
	}
	printf("%d%d%d",a,b,c);
	
}
