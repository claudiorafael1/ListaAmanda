/*23 - Sabe-se que um n�mero da forma n3 � igual a soma de n �mpares consecutivos.
Exemplo: 13= 1, 23= 3+5, 33= 7+9+11, 43= 13+15+17+19,...
Dado m, determine os �mpares consecutivos cuja soma � igual a n3 para n assumindo
valores de 1 a m.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int calculaImparCubo (int numero,int impar, int aux,int tot_soma){
	if(aux == 1){
		impar=1;
	}else{
		for(int i=1; i<=aux; i++){
		impar = impar + 2;
		tot_soma = tot_soma + impar;
	}
	}
	if(aux == numero){
		return tot_soma;
	}
	
	calculaImparCubo(numero, impar, aux+1, tot_soma);
}
	

main(){
	int num,impar;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o n�mero para a saber:  ");
	scanf("%d",&num);
	 impar = calculaImparCubo(num, 1, 1, 0);
	 printf("%d",impar);

}
