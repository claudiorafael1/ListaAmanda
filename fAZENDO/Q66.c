/*66 - Faça um programa que leia um número N e:
? Crie dinamicamente e leia um vetor de inteiro de N posições;
? Leia um número inteiro X e conte e mostre os múltiplos desse número que
existem no vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int tam,*pMalloc,i,valor,j=0,numero;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Tam: ");
	scanf("%d",&tam);
	printf("Numero: ");
	scanf("%d",&numero);
	int vetor [tam];
	
	pMalloc = (int*) malloc (tam*sizeof(int));
	for(i=0;i<tam;i++){
		printf("valores: ");
		scanf("%d",&valor);
		*(pMalloc+i) = valor;
	}
	for(i=0;i<tam;i++){
		if ((*(pMalloc+i)%numero==0)){
			vetor [j] = *(pMalloc+i);
			j++;
		}
	
	}
	for(i=0;i<tam;i++){
	printf("Malloc = %d ",*(pMalloc+i));
	}
	printf("\n");
	for (i=0;i<j;i++){
	printf("Vetor = %d ",vetor[i]);
		
	}
}
