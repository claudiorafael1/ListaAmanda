/*4 - Fa�a a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos tr�s
valores lidos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int a,b,c,z;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva os valores: ");
	scanf("%d%d%d",&a,&b,&c);
	z = pow(a,2)+ pow(b,2) +pow (c,2);
	printf("Resultado %d",z);
	
}
