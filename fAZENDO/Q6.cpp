/*6 - Fa�a um programa que calcule e mostre a �rea de um trap�zio. Sabe-se que:
A = .................... .. .................... * ..............
Lembre-se a base maior e a base menor devem ser n�meros maiores que zero.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int baseM,basem,h;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva os valores: ");
	scanf("%d%d%d",&baseM,&basem,&h);
	descendente = (baseM +basem) *h/2;
	printf("%f",descendente);
	
	
}
