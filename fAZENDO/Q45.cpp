/*45 - Fa�a um programa que permita ao usu�rio entrar com uma matriz de 3 x 3
n�meros inteiros. Em seguida, gere um array unidimensional pela soma dos n�meros
de cada  � coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:
5 -8 10
1 2 15
25 10 7
Vai gerar um vetor, onde cada posi��o e a soma das colunas da matriz. A primeira
posi��o ser� 5 + 1 + 25, e assim por diante: 31 4 3*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int mat[3][3],vetor[3];
	setlocale(LC_ALL,"PORTUGUESE");
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			 printf("Numeros: ");
	         scanf("%d",&mat[i][j]);
}
	}
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			vetor[i] = vetor[i]+mat[j][i];
}
}
for(int i=0;i<3;i++){
printf("%d",vetor[i]);
}
	
}
