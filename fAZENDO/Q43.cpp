/*43 - Dadas duas matrizes reais Amxn e Bnxp, calcular o produto de A por B. Obs: Validar se s�o
multiplic�veis.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int l,c,l2,c2
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o n� de colunas: ")
	scanf("%d%d",&c,&c2);
	printf("Escreva o n� de Linhas: ")
	scanf("%d%d",&l,l2);
	for (int i=0;i<l;i++){
		for(int j=0;j<c;j++){
	        printf("Numeros: ");
	        scanf("%d",&mat[i][j]);
	        ;
}
}
for (int i=0;i<l2;i++){
		for(int j=0;j<c2;j++){
			printf("Numeros2: ");
	        scanf("%d",mat2[i][j])
			
			
	}
		
}
if(l==c2){
	for (int i=0;i<l;i++){
		for(int j=0;j<c2;j++){
			mat3[i][j] = mat[i][j]*mat2[j][i] +mat[i+1][j+1]*mat2[j+1][i+1];
			
			
			
	}
		
}
	
}
for (int i=0;i<l;i++){
		for(int j=0;j<c2;j++){
printf("%d",mat[i][j]);
}
}


}
