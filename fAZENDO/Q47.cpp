/*�Fa�a um programa que armazena filmes produzidos por v�rios diretores e:
� Crie e leia um vetor de 5 diretores, cada um contendo nome (m�ximo 20
letras), quantidade de filmes e filmes. O membro filmes e um vetor, que deve
ser criado ap�s ter lido quantidade de filmes. Cada filme � composto por nome,
ano e dura��o.
� Procure um diretor por nome, mostrando todos os filmes que ele j� produziu.
Repita o processo at� digitar uma string vazia.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
struct tipofilme{
    char nome_filme[20];
    int ano,duracao;
};
struct tipodiretor{
	char nome_diretor[20];
	int q_filmes;
	struct tipofilme filmes[q_filmes];
	
};


main(){
	int x;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Quantidade de diretores: ");
	scanf("%d",&x);
	struct tipodiretor diretores[x];
	fflush(stdin);
	for(int i=0;i<x;i++){
		printf("nomediretor: ");
		fgets(diretores[i].nome_diretor,15,stdin);
		printf("quantidade de filmes: ");
		scanf("%d",&diretores[i].q_filmes);
		fflush(stdin);
		printf("Nome_filme: ");
		fgets(diretores[i].filmes[i].nome_filme,15,stdin);
		printf("Ano: ");
		scanf("%d",&diretores[i].filmes[i].ano);
		printf("Duracao: ");
		scanf("%d",&diretores.filmes[i].duracao);
		fflush(stdin);
		
		
	}
	fflush(stdin);
		for(int i=0;i<x;i++){
			printf("%s%d%s%d%d",diretores[i].nome_diretor,diretores[i].q_filmes,diretores[i].filmes[i].nome_filme,diretores[i].filmes[i].ano,diretores.filmes[i].duracao);
		}
	
}
