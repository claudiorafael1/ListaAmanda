/*3 - Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao e:
R = G . ¥ð/180, sendo G o angulo em graus e R em radianos e ¥ð = 3.14.*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float R =0;int angulo =0;
	printf("Escreva um ângulo(em graus)");
	scanf("%d",&angulo);
	R = angulo *3.14/180;
	printf("%f",&R);	
}
