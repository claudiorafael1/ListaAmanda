
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct TipoLivro{
	char titulo [100];
	int anoEdicao,n_pag;
	double preco;
};
main(){

int q_element;
	printf("Quantos livros vai querer cadastrar?: ");
	scanf("%d",&q_element);
	int cont,i;
	float tot_preco,tot_parc;
	tot_parc=0;
	struct TipoLivro livro[q_element];
	for(int i =0;i<q_element;i++){
	printf("Digite o titulo do livro: ");
		scanf("%s*%c",&livro[i].titulo);
		printf("Digite o ano de edi��o: ");
		scanf("%d",&livro[i].anoEdicao);
		printf("Digite o n� de p�ginas: ");
		scanf("%d",&livro[i].n_pag);
		printf("Digite o pre�o: ");
		scanf("%lf",&livro[i].preco);
	    cont=cont+i;
	    tot_parc =tot_parc+livro[i].preco;


}
	 tot_preco = tot_parc/q_element;
for(int j=0;j<q_element;j++){
	printf("A m�dia do pre�o dos livro � %0.2lf \n Seu livro custa %0.2f\n ",tot_preco,livro[j].preco);
}
}
