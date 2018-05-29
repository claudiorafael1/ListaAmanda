#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 int main() {
 	setlocale(LC_ALL, "Portuguese");
 	int num,i,d;
 	
 	printf("Digite um numero: ");
 	scanf("%d",&num);
 	for(num;num>0;num--){
		d*=num;
	 }
		printf("%d \n",d);
 	
}
 
