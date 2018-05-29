/*Dados n números inteiros positivos, calcular a soma dos que são primos.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	do {
		printf("Vai: ");
		scanf("%d",&num);
		for(int i =0;i<=num;i++){
			if (num%2==0){
			cont++;
		}
			
		}
		if (cont==2){
			total = total+num;
		}
	
	}while (num!=0);
	printf("%d",total);

}

