/*51 - Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma
equação do segundo grau e retorne o valor do delta, que é dado por 'b2 - 4ac'*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int delta (int a,int b,int c);
main(){
	int x,y,z,result;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva os valores da função: ");
	scanf("%d%d%d",&x,&y,&z);
	result = delta(x,y,z);
	printf("O valor do delta é %d",result);
	
}

int delta (int a, int b,int c){
	return pow(b,2) - (4*a*c);
}
