#include<stdio.h>
#include<locale.h>
#include<math.h>

int function(int x){
	int i;
	for(i=x;i>1;i--){
	  x*= i;
    }
    return x;
}
int main(){
	
	int x;
	printf("Digite um numero:\n");
	scanf("%d",&x);
	
	printf("%d \n",function(x));

	return 0;


}
