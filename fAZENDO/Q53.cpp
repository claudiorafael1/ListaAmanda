/*53 - Faça uma função que verifica se uma matriz quadrada de ordem N é a matriz
identidade.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int verificaIdentidade(int matriz [3][3]);


main(){
	
	int result;
	setlocale(LC_ALL,"PORTUGUESE");
	/*printf("Escreva o n° de linhas e colunas: ");
	scanf("%d",&x);
	int mat [3][3];*/
	int mat [3][3];
	for (int i =0;i<3;i++){
		for (int j =0;j<3;j++){
			printf("Escreva os números na posição [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	/*	for (int i =0;i<3;i++){
		for (int j =0;j<3;j++){
			printf("Escreva os números na posição [%d][%d]: %d ",i,j,mat[i][j]);
		}
	}*/
	result = verificaIdentidade(mat);
	
	(result ==1)?printf("A matriz é identidade"):printf("A matriz não é identidade"); 
}

int verificaIdentidade (int matriz[3][3]){
int i,j,cont=0,cont2=0;
	for (i=0;i<3;i++){
		for (j=0;j<3;j++){
			if(i != j && matriz[i][j] == 0){
				cont ++;
		if(i==j && matriz[i][j]==1) {
			cont2++;
		}
	}
}
	//printf("%d%d",cont,cont2);
	if (cont==6 && cont2==3){
		return 1;
	}else {
		return 2;
	}
	
}

