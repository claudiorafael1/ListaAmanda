/*Construa um programa que leia uma matriz 5 x 5. Na sequencia escreva na tela uma mensagem informando se a matrizlida é simétrica ou não.
Obs: uma matriz simétrica é toda matriz que é igual a sua transpost*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"PORTUGUESE");
int nl,nc,i,j,cont;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o número de linhas: ");
	scanf("%d",&nl);
	printf("Escreva o número de colunas: ");
	scanf("%d",&nc);
	cont = nl+nc;
	int mat[nl] [nc],mat2[nl][nc];
	system("cls");
	for( i = 0;i<nl;i++){
		for( j=0;j<nc;j++){
			printf("Escreva os valores da matriz [1] na posição[%d][%d]: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		//	printf("Escreva os valores da matriz [2] na posição[%d][%d]: ",i+1,j+1);
		//	scanf("%d",&mat2[i][j]);
			mat2[j][i] = mat[i][j];
		
	}
}
    for(i=0;i<nl;i++){
    	for(j=0;j<nl;j++){
    		if(mat[i][j]==mat2[i][j]){
    			cont--;
			}else{
				cont+=0;
			}
	}
}
(cont==0)?printf("É SIMÉTRICO ");:prinf("Não é SIMÉTRICO");
}

