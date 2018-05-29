#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	int i,j;
	char nome[30],nome2[30];
	printf("Escreva seu nome");
	fgets(nome,25,stdin);
	for (i=0;i<strlen(nome);i++){
		for(j=strlen(nome);j>strlen(nome);j--){
			strcpy(nome[i],nome2[j]);
		}
	}
	printf("%s",nome2);
}
