/*7-Crie um programa que registre a produ��o e venda de um produto (ex. sabonete).
O programa deve ter um menu com as seguintes op��es:
1- Ver estoque (mostra o estoque atual)
2- Registrar produ��o (pergunta quantos itens foram produzidos e SOMA ao estoque)
3- Registrar venda (pergunta quantos itens foram vendidos e SUBTRAI do estoque)
4- Sair
Obs.:
a) n�o se pode vender se n�o h� estoque suficiente.
b) escolha um valor para o produto e mostre quanto custar� a venda (op.3) e quanto vale o
estoque (op.1) cada vez que a opcao for chamada*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int op, estoque =0,itensProduzidos =0,itensVendidos =0;
	setlocale (LC_ALL, "Portuguese");
	printf("Escolha uma das nossas op��es: \n1-Para Consulta de estoque\n 2-Para Registrar produ��o\n 3- Registrar venda\n 4-Para sair ");
	scanf("%d",&op);
	
	do {
		
switch(op){
		case 1:
			printf("Esse � o quanto temos no estoque",estoque);
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
