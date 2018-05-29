/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
? para homens: (72.7 * h) – 58;
? para mulheres: (62.1 * h) – 44.7.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int h,b,ideal;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva sua altura e digite(1-Para homem ou 2-Para mulher): ");
	scanf("%d%d",&h,&b);
	if (b==1){
		ideal=(72.7*h)-58;
		printf("A altura ideal para homens é: %d",ideal);
	}else{
		ideal=(62.1*h)-44.7;
		printf("A altura ideal para mulheres é: %d",ideal);
	}
	
	
}
