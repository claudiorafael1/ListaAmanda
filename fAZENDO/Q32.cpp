/*32 - Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os
múltiplos de um número inteiro x num vetor e mostre-os na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int tam,multiplo;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Tam e o Múltiplo: ");
	scanf("%d%d",&tam,&multiplo);
	int vetor [tam],vet[tam+1];
	for (int i =0;i<tam;i++){
		printf("Valores: ");
		scanf("%d",&vetor[i]);
		if (vetor[i]%num==0){
			aux = vetor [i];
			j++
		}

		vet[j+1]= aux;	

}
for (int i =0;i<tam+1;i++){
printf("%d",vet[i]);
}	
}
