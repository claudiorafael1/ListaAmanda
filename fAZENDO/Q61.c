/*Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba
estas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o e chamada passando
duas vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B
e B ter� o valor de A.*/
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
	printf("Escreva os dois valores para a fun��es: ");
	scanf("%d%d",&a,&b);
	trocaValor(a,b,pA);
	printf("%d %d %d",a,b,*pA);
	
}
