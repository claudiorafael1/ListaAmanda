/*8 - Determinar quanto tempo um corpo em repouso leva para atingir o solo a a partir de uma
certa altura informada pelo usuário. Considere g = -9,8 m/s^2 e que a queda livre é
determinada pela fórmula: H = Ho + VoT + (gT^2)/2 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

main(){
	int h,velocidade;
	float H;
	setlocale(LC_ALL,"PORTUGUESE");
	printf("Escreva os valores: ");
	scanf("%d%d",&h,&velocidade);
	H = h + velocidade+pow(9,8,2)/2;
	printf("%f",H);
	
}
