/*Escrever um programa que receba v�rios n�meros inteiros no teclado e no final
imprimir a m�dia dos n�meros m�ltiplos de 3. Para sair digitar 0(zero).*/
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
		(multi%num==0)? printf("� multiplo"): printf("N�o � multiplo");
		
	
      	
	  }while (num!=0);
		
	
	
}
