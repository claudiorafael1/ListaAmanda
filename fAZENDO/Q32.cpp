/*32 - Fa�a um programa que leia um vetor de 10 n�meros. Leia um n�mero x. Conte os
m�ltiplos de um n�mero inteiro x num vetor e mostre-os na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int tam,multiplo;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Tam e o M�ltiplo: ");
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
