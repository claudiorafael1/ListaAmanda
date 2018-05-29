/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva um valor: ");
	scanf("%d",&x);
	if (x<=1){
		x=1;
		printf("%d",x);
	}else if (x>1||x<=2) {
		x=2;
		printf("%d",x);
	   
	} else if (x>2||x<=3){
		x=pow (x,2);
		printf("%d",x);
	
	}else if (x>3){
		x=pow(x,3);
		printf("%d",x);
	}
	
}
