/*55 - (a) Escreva uma fun��o que recebe uma matriz real Amxn e determina a sua
transposta (Se B � a matriz transposta de A ent�o aij = bji).
(b) Escreva uma fun��o que calcula o produto escalar de dois vetores dados.
(c) Dada uma matriz real Xmxn, usando as fun��es acimas, calcule o
produto X x Xt.
(d) Fa�a uma fun��o que verifica se uma matriz Amxm � a matriz identidade.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

/*int fazTransposicao (int matriz[3][3]);
main(){
	setlocale(LC_ALL,"PORTUGUESE");
		                                                 //Quest�o a 
		                                                 
		                                                 
	int i,j,mat[3][3],mat2[3][3];
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("Digite os valores do matriz: ");
			scanf("%d",&mat[i][j]);
		}
	}
	
	mat2[3][3]=fazTransposicao(mat);
	  
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d ",mat2[i][j]);
			printf("\n");
			
}
printf("\n");
}
}
int fazTransposicao (int matriz [3][3]){
	int m[3][3],i,j;
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			return m[i][j] = matriz[j][i];
			
			
    }

	}	
}	*/

	
	/*   
	                                                  Quest�o b
    int produtoEscalar(int tam,int vetorzin[],int vetorzin2[]);
    main(){
	int x,result;
	printf("Escreva o tamanho do vetor: ");
	scanf("%d",&x);
	int vetor[x],vetor2[x];
	for (int i=0;i<x;i++){
			printf("Digite os valores do vetor 1:  ");
			scanf("%d",&vetor[i]);
			printf("Digite os valores do vetor 2:  ");
			scanf("%d",&vetor2[i]);	
	}
	result = produtoEscalar(x,vetor,vetor2);
	printf("%d",result);
}
int produtoEscalar (int tam,int vetorzin[],int vetorzin2[]){
	int i,vetorTot[tam],totEscalar;
	for (i=0;i<tam;i++){
		vetorTot[i] = vetorzin[i] + vetorzin[i];
		totEscalar += vetorTot[i]; 
	}
	return totEscalar;
}
}*/

	/*                                                    Quest�o c
	
	
	
	
	
	
	

	
	
	
	/*                                                    Quest�o d 
	int verificaIdentidade(int matriz [3][3]);
	main(){
	int result;
	setlocale(LC_ALL,"PORTUGUESE");

	int mat [3][3];
	for (int i =0;i<3;i++){
		for (int j =0;j<3;j++){
			printf("Escreva os n�meros na posi��o [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	result = verificaIdentidade(mat);
	
	(result ==1)?printf("A matriz � identidade"):printf("A matriz n�o � identidade"); 
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
}
*/	
	

