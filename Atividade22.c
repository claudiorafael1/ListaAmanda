/*Escrever um programa que receba v�rios n�meros inteiros no teclado e no final
imprimir a m�dia dos n�meros m�ltiplos de 3. Para sair digitar 0(zero).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int multi,num,x;

      do{
      	printf("Digite um numero inteiro:  \n");
		scanf("%d",&num);

		if (num%3==0){
		 printf("eh multiplo \n");
		 }
		 else
		  printf("Nao eh multiplo");



	  }while (num!=0);


return 0;
}
