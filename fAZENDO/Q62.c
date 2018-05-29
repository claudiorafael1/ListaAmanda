/*62-Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int valor,q_vetor,vet[q_vetor],*pVet= vet;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva a quantidade do vetor: ");
	scanf("%d",&q_vetor);
	system("cls");
	for (int i =0;i<q_vetor;i++){
		printf("Escreva os valores do vetor: ");
		scanf("%d",&valor);
		*(pVet+i) = valor*2;
		
	}
	system("cls");
	
	for (int i =0;i<q_vetor;i++){
		printf("%d ",*(pVet+i));
	}
	
	
	
	
}
