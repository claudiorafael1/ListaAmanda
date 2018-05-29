/*1 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
formula de conversao e: F = C.(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	float F;int c;
	printf("Digite uma temperatura: ");
	scanf("%d", &c);
	F=c*(9.0/5.0)+32.0;
	printf("A temperatura é: %f",F);
	
}
