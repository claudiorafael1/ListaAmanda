/*15 - Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja
negativo, imprimindo o resultado*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int x;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o número: ");
	scanf("%d",&x);
	if(x>0){
		x= 2*x;
	}else {
		x = 3*x;
	}
	printf("%d",x);
}
