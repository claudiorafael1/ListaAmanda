/*54 - Faça uma função que recebe, por parâmetro, uma matriz A[7][6] e uma coluna N e
retorne a soma dos elementos dessa coluna.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int somaColuna (int matriz[7][6],int tam){
	int result;
	for (int i =0;i<7;i++){
			result = result +matriz[i][tam];
	}
	return result;
}

main(){
	int mat [7][6],coluna;
	int soma;
	setlocale(LC_ALL,"PORTUGUESE");
	for (int i=0;i<7;i++){
		for (int j=0;j<6;j++){
			printf("Digite os valores: ");
			scanf("%d",&mat[i][j]);	
		}
	}
	system("cls");
	printf("Escreva o número de uma das colunas: ");
	scanf("%d",&coluna);
	soma = somaColuna(mat,coluna);
	printf("A soma é %d",soma);
	
	
}
