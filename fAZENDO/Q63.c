/*63-Faça um programa que leia três valores inteiros e chame uma função que receba
estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na
primeira variável, o segundo menor valor na variável do meio, e o maior valor na
última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int valorOrdenado(int a,int b,int c){
	int *aux = &a;
  if (a==b&&a==c&&b==c){
  	 return 1;
  }else if(a>b) {
		*(aux) = b;
		b = a;
		a = *(aux);
	}else if (a>c){
		*(aux) = c;
		c=a;
		a=*(aux);
	}else if (b>c){
		aux = &c;
		*(aux)= c;
		c=b;
		b=*(aux);
	}
return 0;
}
	
main(){
	int x,y,z,result;
	setlocale(LC_ALL,"PORTUGUESE");
	     printf("Valores: ");
     	scanf("%d%d%d",&x,&y,&z);
	result = valorOrdenado(x,y,z);
	(result = 1)? printf("Valores todos iguais") : printf("%d%d%d",x,y,z);
	
	
}
