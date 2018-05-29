#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int somaVetor (int *vetor,int tam){
	if (tam==-1){
		return 0;
	}
	return vetor[tam]+somaVetor(vetor,tam-1);
}

main (){
	int tam_vet =5,vet [tam_vet],*pVet=vet,result;
	for (int i =0;i<tam_vet;i++){
		vet[i] = rand()%10;	
		printf("%d ",vet[i]);
	}
	result = somaVetor(pVet,tam_vet);
	printf("%d",result);
}
