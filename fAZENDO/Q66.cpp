
/*Faça um programa que leia um número N e:
Crie dinamicamente e leia um vetor de inteiro de N posições;
Leia um número inteiro X e conte e mostre os múltiplos desse número que
existem no vetor.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int tam, *pVet,*pMulti,cont,valor,num;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o tamanho do seu vetor");
	scanf("%d",&tam);
	printf("Qual número vc quer saber ?");
	scanf("%d",&num);
	pVet = (int *) calloc (tam,sizeof(int));
	pMulti = (int *) calloc (tam,sizeof(int));
	for (int i=0;i<tam;i++){
		//*(pVet+i) = rand()%10;
		printf("Escrevca os valores: ");
		scanf("%d",&valor);
		*(pVet+i) = valor; 
	}
	for (int i=0;i<tam;i++){
          if(*(pVet+i)%num==0){
          	cont++;
          	*(pMulti+i)= *(pVet+i);
          	 printf("O Multiplos são: %d - E o cont é:  %d \n",*(pMulti+i),cont);
          	
		  }    	
 	}
 	
 
}
