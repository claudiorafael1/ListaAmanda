/*Calcular e imprimir o volume e a área de superfície de um cone reto, um cilindro ou uma esfera.
 O programa deverá ler a opção da figura desejada.
 
? Cone reto V = pi*r*r*(H/3) e A = pi*r*sgrt(r*r+H*H); ?
 Cilindro V = pi*r*r*H e A = 2pi*r*H ?
  Esfera V = 4/(3*pi*r*r*r) e A = 4*pi*r*r */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int v,a,r,h,op;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escolha uma das opções\n");
	printf("1- Para calcular a área do Cone Reto\n");
	printf("2- Para calcular a área do Cone \n");
	printf("3- Para calcular a área do Cilindro\n");
	printf("4- Para calcular a área da Esfera\n");
	printf("0- Para sair\n");
	scanf("%d",&op);
	system ("cls");
	switch(op){
		case 1:
			printf("Informe a altura e o raio");
			scanf("%d%d",&h,&r);
			v = 3.14 * pow(r,2) * (h/3);
			a = 3.14*r*sqrt(pow(r,2)+pow(h,2));
			printf("O valor do volume é %d e  da área %d",v,a);
			break;
		case 2:
			printf("Informe a altura e o raio");
			scanf("%d%d",&h,&r);
			v = 3.14*pow(r,2)*h;
			a= 2*3.14*r*h;
			printf("O valor do volume é %d e da área é %d",v,a);
			break;
		case 3:	
		printf("Informe a altura e o raio");
		scanf("%d%d",&h,&r);
		v= 4/(3*31.4*pow(r,3));
		a = 4*3.14*pow(r,2);
		break;	
		default:
		printf("Vc saiu");
	}
	
}
