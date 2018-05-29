/*68-Faça um programa que leia uma quantidade qualquer de números armazenando-
os na memória e pare a leitura quando o usuário entrar um número negativo. Em

seguida,  ´ imprima o vetor lido. Use a função REALLOC.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int *pMalloc,i,j,valor;
	setlocale(LC_ALL,"PORTUGUESE");
	pMalloc = (int*) malloc (sizeof(int));
	do {
		printf("Digite o valor: ");
		scanf("%d",&valor);
		*(pMalloc+i) = valor;
		i++;
	}while(valor>0); 
	
	pMalloc = realloc(pMalloc,i*sizeof(int));
	for (j=0;j<i;j++){
		printf("%d",*(pMalloc+j));
	}
	
}
