/*5-Fa�a um programa que leia um numero inteiro positivo de tr�s d�gitos(de 100 a 999). Gere
outro numero formado pelos d�gitos invertidos do numero lido*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	int num;
	setlocale (LC_ALL, "Portuguese");
	printf("Escreva um n�mero de tr�s d�gitos: ");
	scanf("%d",&num);
	 int d1,d2,d3;
d1 = (num / 100);
d2 = (num % 100) / 10;
d3 = (num % 100) % 10;
  printf("\nvalor invertido.: %d%d%d\n", d3, d2, d1);
  system("pause");
}

