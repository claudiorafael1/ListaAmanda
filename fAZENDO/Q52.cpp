/*52- O fatorial quádruplo de um número N é dado por:(2N!)/n! Faça uma função recursiva que
receba um número inteiro positivo N e retorne o fatorial quádruplo desse número*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int fatQuadruplo (int x);

main(){
	int fat,result;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva um número para o seu fatorial: ");
	scanf("%d",&fat);
	result = fatQuadruplo(fat);
	system ("cls");
	printf("O fatorial quadruplo é: %d ",result);
	
	
	
}
int fatQuadruplo (int x){
   if(x==0){
   	return 1;
   }else {
   	return 2*(x*fatQuadruplo(x-1))/x*fatQuadruplo(x-1);
   	
   }
 
}
