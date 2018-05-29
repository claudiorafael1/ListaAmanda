


#include <stdio.h>

int main(){
	float maior,menor,aux;
menor='\0';
	do{
	printf("Digite um numero:\n");
		scanf("%f",&aux);
		menor=aux;
		if(aux==0){
			break;
			}
			
		if(aux>maior){
			maior=aux;
			}
				if(aux<=menor){
					menor=aux;
					
					}
				
				
		printf("DIgite 0 para sair:\n");	
				
			scanf("%f",&aux);	
}while(aux!=0);
printf("menor numero: %.2f  \n",menor);
				printf("maior numero: %.2f  \n",maior);
	
	
	return 0;
}

