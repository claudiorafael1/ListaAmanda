/* O custo ao consumidor de um carro novo e a soma do custo de f�brica, da comiss�o do distribuidor, 
e dos impostos. A comiss�o e os impostos s s�o calculados sobre o custo de fabrica, de acordo com
 a tabela abaixo. Leia o custo de f�brica e escreva o custo ao consumidor. 
 custo
 
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int custo_fab, tot;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o custo do carro");
	scanf("%d",custo_fab);
	if (custo_fab==12.000){
		tot = custo_fab * 0.05;
		
	}else if(custo_fab>12.000||custo_fab<25.000) {
		tot = custo_fab*0.10*0.15;
		
	}else if (custo_fab>25.000){
		tot = custo_fab *0.15*0.20;
	}
	
	
	printf(" O valor �: %d",tot);
}
