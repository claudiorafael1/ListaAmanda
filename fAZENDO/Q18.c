/**/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Digite o dia, o mes e o ano: ");
	scanf("%d%d%d",&dia,&mes,&ano);
	dia = dia+1;
	if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
    printf("dia : %d : mes: %d : ano %d  ",dia,mes,ano);
  
  } 
  else {
  	printf("dia : %d : mes: %d : ano %d  ",dia,mes,ano);
    
  
  }
	
}
