
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct TipoLivro{
	char titulo [100];
	int anoEdicao,n_pag;
	float preco;
};
main(){

int q_element;
	printf("Quantos livros vai querer cadastrar?: ");
	scanf("%d",&q_element);
	int cont;
	float tot_preco,tot_parc;
	struct TipoLivro livro [q_element];
	for(int i =0;i<q_element;i++){
	printf("Digite o titulo do livro: ");
		fgets(livro[i].titulo,21,stdin);
		printf("Digite o ano de edição: ");
		scanf("%d",&livro[i].anoEdicao);
		printf("Digite o nº de páginas: ");
		scanf("%d",&livro[i].n_pag);
		printf("Digite o preço: ");
		scanf("%f",&livro[i].preco);
	    cont++;
	    tot_parc = tot_parc + livro[i].preco;


}
	 tot_preco = tot_parc / cont;
for(int j=0;j<q_element;j++){
	printf("A média do preço dos livro é %f \n Seu livro custa %f\n ",tot_preco,livro[j].preco);
}
}
