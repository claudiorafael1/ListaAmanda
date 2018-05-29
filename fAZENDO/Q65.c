/*65-Escreva uma função que receba um array de inteiros V e os endereços de duas
variáveis inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do
array. Escreva também uma função main que use essa função.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int verificaMaior(int tam,int *pVetor,int maior){
	int i;
	for (i=0;i<tam;i++){
		if (*(pVetor+i)>maior){
			maior = *(pVetor+i);
		}
	}
	return maior;
	
}
int verificaMenor(int tam,int *pVetor,int menor){
	int i;
	for (i=0;i<tam;i++){
		if (*(pVetor+i)>menor){
			menor = *(pVetor+i);
		}
	}
	return menor;
	
}
main(){
	setlocale(LC_ALL,"PORTUGUESE");
	int tamanho,i=0,menor,maior;
	printf("Escreva o tamanho: ");
	scanf("%d",&tamanho);
	int vetor [tamanho],*pVet = vetor,valor,inicio;
	inicio = *(pVet);
	for (i=0;i<tamanho;i++){
		printf("Valores: ");
		scanf("%d",&valor);
		*(pVet+i) = valor;
	}
	maior = verificaMaior(tamanho,pVet,inicio);
	menor = verificaMenor(tamanho,pVet,inicio);
	printf("%d%d",maior,menor);
}
