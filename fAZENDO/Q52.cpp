/*52- O fatorial qu�druplo de um n�mero N � dado por:(2N!)/n! Fa�a uma fun��o recursiva que
receba um n�mero inteiro positivo N e retorne o fatorial qu�druplo desse n�mero*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int fatQuadruplo (int x);

main(){
	int fat,result;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva um n�mero para o seu fatorial: ");
	scanf("%d",&fat);
	result = fatQuadruplo(fat);
	system ("cls");
	printf("O fatorial quadruplo �: %d ",result);
	
	
	
}
int fatQuadruplo (int x){
   if(x==0){
   	return 1;
   }else {
   	return 2*(x*fatQuadruplo(x-1))/x*fatQuadruplo(x-1);
   	
   }
 
}
