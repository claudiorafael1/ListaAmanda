/*30 - Escreva um programa que leia um inteiro não negativo N e imprima a soma dos N
primeiros números primos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int num,total,i,cont;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva o número: ");
	scanf("%d",&num);
	
	while (num!=0){
	for(i =0;i<=num;i++){
		if (num%2==0){
			cont++;
    }
			
}
		if (cont==2){
			total = total+num;
		}
		num--;
		cont=0;
		printf("num = %d\n",num);
}

	printf("%d",total);
}
