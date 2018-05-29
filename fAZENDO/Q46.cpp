
/*Faça um programa que leia o nome,matricula,media final de 10 alunos armazenado num vetor
Depois divida em dois vetores de aprovados e desaprovados, sendo a média mínima 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct tipoaluno {
	char nome[20];
	float mediafinal;
	int matricula;
};
main(){
	int x;
	setlocale(LC_ALL,"Portuguese");
	printf("Qual o tamanho do vetor: ");
	scanf("%d",&x);
	struct tipoaluno aluno[x], alunoaprovado[x],alunoreprovado[x];
	fflush(stdin);
	for (int i=0;i<x;i++){
		printf("Nome: ");
		fgets(aluno[i].nome,15,stdin);
		printf("Matricula: ");
		scanf("%d",&aluno[i].matricula);
		printf("Media final: ");
		scanf("%f",&aluno[i].mediafinal);
		if(aluno[i].mediafinal>=5){
			alunoaprovado[i] = aluno[i];
		}else{
			alunoreprovado[i] =aluno[i];
		}
		fflush(stdin);
	}
	



	
}
