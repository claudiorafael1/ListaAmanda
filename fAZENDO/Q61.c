/*Faça um programa que leia 2 valores inteiros e chame uma função que receba
estas 2 variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando
duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B
e B terá o valor de A.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int trocaValor (int x,int y,int *pX){
   x = y;	
  return y = *pX;
}

main(){
	int a,b,*pA=&a;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva os dois valores para a funções: ");
	scanf("%d%d",&a,&b);
	trocaValor(a,b,pA);
	printf("%d %d %d",a,b,*pA);
	
}
