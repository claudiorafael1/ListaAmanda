#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
int fat(int n){
	if(n==1)
		return 1;
	return n*fat(n-1);	
}
int superFat(int nu){
	if(nu==1)
		return 1;
	return fat(nu)*superFat(nu-1);	
}
main(){
	int num;
	printf("Digite um valor:");
	scanf("%d",&num);
	printf("O SUPERFATORIAL DE %d = %d",num,superfat(num));
}
