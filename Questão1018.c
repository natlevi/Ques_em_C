#include<stdio.h>
int main() {
	int valor,nota[7]= {100,50,20,10,5,2,1}, saida;
	
		scanf("%d",&valor);
	
	for(int i=0;i<7;i++) {
	saida = valor/ nota[i];
	printf("%d de Notas de R$ %d\n",saida,nota[i]);
	valor%=nota[i];
	
	}
	
	}
