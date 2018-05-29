/*- Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A formula de conversao e: K = M . 3.6, sendo K a velocidade em km/h
e M em m/s.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	int velocidade,K;
	printf("Escreva uma velocidade em m/s: ");
	scanf("%d",&velocidade);
	K = velocidade *3.6;
	printf("%d",K);
	
}
