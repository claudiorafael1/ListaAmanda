#include<stdio.h>
int main(){
	int dia1,mes1,ano1,dia2,mes2,ano2;
	printf("########################-Bem Vindo##################### \n");
	printf("Digite a primeira data, seguida do mes, e do ano:\n");
	scanf("%d",&dia1);
	scanf("%d",&mes1);
	scanf("%d",&ano1);
	printf("Digite a segunda data\n seguindo a mesma logica:\n");
	scanf("%d",&dia2);
	scanf("%d",&mes2);
	scanf("%d",&ano2);
	
	if((dia1>dia2)&&(mes1>mes2)&&(ano1>ano2)){
		
		
		
		printf("%i%i%i",dia1,mes1,ano1);
		
		
	}else{
			if((dia2>dia1)&&(mes2>mes1)&&(ano2>ano1)){
						
				printf("%i %i %i",dia2,mes2,ano2);
		
				}
				else
				
					{ 
						if((dia2>dia1)&&(mes1>mes2)&&(ano1>ano2)){
							printf("%d / %d / %d",dia1,mes1,ano1);
						
							
						}
						else
						{
							if((dia2>dia1)&&(mes1>mes2)&&(ano2>ano1)){
									printf("%d / %d / %d",dia2,mes2,ano2);
								}
							
						}
				}
			}
	
	return 0;
	}
