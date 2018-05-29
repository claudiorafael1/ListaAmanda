/*7-Crie um programa que registre a produção e venda de um produto (ex. sabonete).
O programa deve ter um menu com as seguintes opções:
1- Ver estoque (mostra o estoque atual)
2- Registrar produção (pergunta quantos itens foram produzidos e SOMA ao estoque)
3- Registrar venda (pergunta quantos itens foram vendidos e SUBTRAI do estoque)
4- Sair
Obs.:
a) não se pode vender se não há estoque suficiente.
b) escolha um valor para o produto e mostre quanto custará a venda (op.3) e quanto vale o
estoque (op.1) cada vez que a opcao for chamada*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int op, estoque =0,itensProduzidos =0,itensVendidos =0;
	setlocale (LC_ALL, "Portuguese");
	printf("Escolha uma das nossas opções: \n1-Para Consulta de estoque\n 2-Para Registrar produção\n 3- Registrar venda\n 4-Para sair ");
	scanf("%d",&op);
	
	do {
		
switch(op){
		case 1:
			printf("Esse é o quanto temos no estoque",estoque);
			break;
		case 2: 
		printf("Quantos itens foram produzidos? : ");
		scanf("%d",&itensProduzidos);
		estoque = estoque + itensProduzidos;
		break;
		case 3: 
		printf("Quantos itens vc deseja comprar?: ");
		scanf("%d",&itensVendidos);
		estoque = estoque + itensVendidos;
		break;
		default:
		printf("Vc saiu do programa"); 
	}
} while(op!=4);
}
