
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
struct tipoatleta{
	int matricula,idade;
	float altura;
};
main(){
	setlocale(LC_ALL,"Portuguese");
	int q_element,tot=0,tot2=0;
	float tot_final=0,tot2_final=0;
	printf("Quantos atleta vai querer cadastrar?: ");
	scanf("%d",&q_element);
	struct tipoatleta atleta[q_element];
	for(int i=0;i<q_element;i++){
	   printf("Idade: ");
	   scanf("%d",&atleta[i].idade);
	   printf("Matricula: ");
	   scanf("%d",&atleta[i].matricula);
	   printf("Altura: ");
	   scanf("%d",&atleta[i].altura);
	   tot= tot+atleta[i].altura;
	   tot2= tot2+atleta[i].idade;
	}
	tot_final = tot/q_element;
	tot2_final=tot2/q_element;

	for(int i=0;i<q_element;i++){
		printf("%f%f",tot_final,tot2_final);

	}

}



