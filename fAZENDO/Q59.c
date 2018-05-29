
/*59- Os números de Catalan são definidos pela seguinte recursão
Alguns números desta sequência são: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 4862, 16796,
58786... Faça uma função recursiva que receba um número N e retorne o N-ésimo
número de Catalan.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int catalan(int numero){
	if(numero==0){
		return 1;
	} else{
		return 2*(2*(numero-1)*catalan(numero-1))/(numero+1);
	}
}

main (){
	int num;
	printf("Numero: ");
	scanf("%d",&num);
	for (int i =0;i<num;i++){
		printf("%d",catalan(i));
	}
		
}
