/*Escrever um programa que receba vários números inteiros no teclado e no final
imprimir a média dos números múltiplos de 3. Para sair digitar 0(zero).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int multi,num,x;
	setlocale(LC_ALL,"PORTUGUESE");
      do{
      	printf("Vai: ");
		scanf("%d",&num);
		multi = num*3;
		(multi%num==0)? printf("É multiplo"): printf("Não é multiplo");
		
	
      	
	  }while (num!=0);
		
	
	
}
