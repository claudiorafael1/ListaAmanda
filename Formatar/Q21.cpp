/*Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses
vetores. Obs: Produto escalar é a soma de todos os produtos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"PORTUGUESE");
		int y,x, i, vetorzao[x],somafinal =0, vetor[x],vetorzin[y];
	printf("Escreva a quantidade de elementos");
	scanf("%d",&x);
	printf("Escreva a quantidade de elementos");
	scanf("%d",&y);
	if(x==y){
	
	for(i = 0; i<x;i++){
		printf("Primeiro vetor");
		scanf("%d",&vetor[i]);
		}
		for(i = 0; i<y;i++){
		printf("Segundo vetor");
		scanf("%d",&vetorzin[i]);
		vetorzao[i] = vetorzin[i] * vetor[i];
		somafinal+= vetorzao[i];
}
	
	system("cls");
	
	for(i = 0;i<x; i++){
		printf("Os produtos entre os vetores na posição %d são %d \n ",i,vetorzao[i]);
		
		printf("O produto final é %d",somafinal);
	}
}else{
	printf("Tamanhos diferentes do vetor");
}
	
}
	
}
