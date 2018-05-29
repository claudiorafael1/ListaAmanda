/**28 – Faça um programa que some os termos de valor par da sequência de Fibonacci,
cujos valores não ultrapassem 4000.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	int x=-1,y=1,z=0,i,num,aux =0;
	printf("Até quanto vai a sequência?: ");
	scanf("%d",&num);
do{
	z=x+y;
	x=y;
	y=z;
	printf("%d",z);
	num--;
	if(z%2==0){
		aux = aux+z;
	}
	
}while(num>0);
printf("A soma é: %d",aux);

}
