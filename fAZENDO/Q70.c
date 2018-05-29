/*Faça um programa que leia dois números N e M:
? Crie e leia uma matriz N x M de inteiros;
? Crie e construa uma matriz transposta M x N de inteiros.
Mostra as duas matrizes*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int ** alocaMatriz(int ql, int qc){
	int ** ppm, i;
	ppm = (int **) calloc (ql, sizeof(int *));
	for(i = 0; i<ql; i++){
		ppm[i] = (int *) malloc(qc * sizeof(int));
	}
	return ppm;
}

int ** populaMatriz(int ** ppmp, int qlp, int qcp){
	int i, j;
	for(i=0;i<qlp; i++){
		for(j=0; j<qcp; j++){
			ppmp[i][j] = rand()%10;
		}
	}
	return ppmp;
}




main(){
	int lin,col;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o tamanho da matriz: \n");
	scanf("%d%d",&lin,&col);
	int ** matriz,i, j, matrix[lin][col];
	matriz = alocaMatriz(lin, col);
	matriz = populaMatriz(matriz, lin, col);
	for(i = 0; i< lin; i++){
		for(j=0; j< col; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
for(i = 0; i< lin; i++){
		for(j=0; j< col; j++){
			matrix[j][i] = matriz [i][j];	
		}
		
}
printf("\n");
for(i = 0; i< lin; i++){
		for(j=0; j< col; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");

	
}
}
