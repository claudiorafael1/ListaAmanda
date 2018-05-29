/*13 - Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. 
Cada data deve ser composta por três valores inteiros,
 em que o primeiro representa o dia, o segundo, o mês e o terceiro, o ano. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int dia,dia2,mes,mes2,ano,ano2,cont;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva a data");
	scanf("%d%d%d",&dia,&mes,&ano);
    printf("Escreva a data 2");
	scanf("%d%d%d",&dia2,&mes2,&ano2);
	if (ano>ano2){
		cont++;
}
if (dia2>dia){
	cont++;
}
if (mes2>mes){
	cont++;
}
	(cont==3)? printf("data1 maior ") : printf("Data2 maior");  
	
}

