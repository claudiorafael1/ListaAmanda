/*69 - . Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em  um vetor , depois use a função MALLOC para reservar
(alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor
deve ter um tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como
um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios
(usando a função rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
primeiros elementos do vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
main(){
	int tam,i;
	double *pMalloc,valor;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Tam: ");
	scanf("%d",&tam);
	pMalloc = (double*) malloc (tam*sizeof(double));
	for (i=0;i<tam;i++){
		valor = rand()%100;
		*(pMalloc+i)= valor;
	}
	printf("\n");
	for (i=0;i<tam;i++){
	   printf("%f ",*(pMalloc+i));
	}
}
