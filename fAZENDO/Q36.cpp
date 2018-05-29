/*36 - Fazer um programa em C que solicita um número inteiro e soletra o mesmo na
tela. Ex: 124: um, dois, quatro.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	char num[4];
	char vetor[4];
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Digite seu número: ");
	gets(num);
vetor [4] = '\0';
fflush(stdin);
 fflush(stdin);
 	switch(num[0]){
 		case '1':
 		vetor[0]='um';
 			break;
 		case '2':
 		   vetor[0]='dois';
 			break;
 		case '3':
 			vetor[0]='tres';
 			break;
 		case '4':
 			vetor[0]= 'quatro';
 			break;
 		case '5':
 			vetor[0]='cinco';
 			break;
 		case '6':
 			vetor[0]='seis';
 			break;
 		case '7':
 			vetor[0]='sete';
 			break;
 		case '8':
 			vetor[0] ='oito';
 			break;
 		case '9':
 			vetor[0]= 'nove';
 			break;
	 default: 
	 vetor[0]= 'zero';

 }
 fflush (stdin);
 	switch(num[1]){
 		case '1':
 		vetor[1]='um';
 			break;
 		case '2':
 		   vetor[1]='dois';
 			break;
 		case '3':
 			vetor[1]='tres';
 			break;
 		case '4':
 			vetor[1]= 'quatro';
 			break;
 		case '5':
 			vetor[1]='cinco';
 			break;
 		case '6':
 			vetor[1]='seis';
 			break;
 		case '7':
 			vetor[1]='sete';
 			break;
 		case '8':
 			vetor[1] ='oito';
 			break;
 		case '9':
 			vetor[1]= 'nove';
 			break;
	 default: 
	 vetor[1]= 'zero';
	
 }
 fflush(stdin);
 	switch(num[3]){
 		case '1':
 		vetor[2]='um';
 			break;
 		case '2':
 		   vetor[2]='dois';
 			break;
 		case '3':
 			vetor[2]='tres';
 			break;
 		case '4':
 			vetor[2]= 'quatro';
 			break;
 		case '5':
 			vetor[2]='cinco';
 			break;
 		case '6':
 			vetor[2]='seis';
 			break;
 		case '7':
 			vetor[2]='sete';
 			break;
 		case '8':
 			vetor[2] ='oito';
 			break;
 		case '9':
 			vetor[2]= 'nove';
 			break;
	 default: 
	 vetor[2]= 'zero';
 }
 fflush(stdin);
 for(int i=0;i<3;i++){
 	fflush(stdin);
 	printf("%s",vetor[i]);
 	fflush(stdin);
 }
}
