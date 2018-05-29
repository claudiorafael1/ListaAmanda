/*39 – Escreva um algoritmo em C que receba uma String e depois outra String e
verifique se a segunda string está contida na primeira.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	char palavra[30],palavra2[30];
	int x;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva a palavra: ");
	fgets(palavra,21,stdin);
	printf("Escreva a palavra: ");
	fgets(palavra2,21,stdin);
	x=strcmp(palavra,palavra2);
	fflush(stdin);
	//(x==1)? fflush (stdin) printf("Mesma coisa"): printf("Não é mesma coisa");
	if(x==1){
		printf("É mesma coisa");
		
	}else{
		printf("Não é mesma coisa");
	}
}
