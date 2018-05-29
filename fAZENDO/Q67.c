/*67-Faça um programa que simule a memória de um computador: o usuário ir a
especificar o tamanho da memória, ou seja, quantos bytes serão alocados do tipo
inteiro. Para tanto, a memória solicitada deve ser um valor múltiplo do tamanho do
tipo inteiro. Em seguida, o usuário ter a 2 opções: inserir um valor em uma
determinada posição ou consultar o valor contido em uma determinada posição. A
memória deve iniciar com todos os dados zerados.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int *pMalloc,valor,i,op,memoria,alocar,tam;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Tam: ");
	scanf("%d",&tam);
	pMalloc = (int*)malloc(tam*sizeof(int));
	for (i=0;i<tam;i++){
		*(pMalloc+i) = 0;	
	}
	do{
	
	printf("1- Para inserir valores\n 2-Consultar valor\n 0- Para nada\n");
	scanf("%d",&op);
	system ("cls");
	switch (op){
		case 1:
			printf("Em qual posição vc vai querer?: ");
			scanf("%d",&alocar);
			printf("Insira um valor: ");
			scanf("%d",&valor);
			*(pMalloc+alocar) = valor;
		
			break;
			system ("cls");
	    case 2:
	    	printf("Insira um valor de memória para ser consultado");
	    	scanf("%d",&memoria);
	    	printf("%d\n",*(pMalloc+memoria));
	    	break;
         	
	default:
		printf("VAZOU");
	}
}	while(op!=0);
}
