#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numeros[10], i;
	
	for(i=0;i<10;i++){
		printf("Digite um número inteiro maior que zero:\n");
		scanf("%d",&numeros[i]);
	}
	
    for (i = 0; i < 10; i++) {
        if (numeros[i] % 2==0 ) {
            numeros[i]=33;
        }
		else{
	        if (numeros[i] < 0 ) {
            	numeros[i]=99;
        	}
			else{
				numeros[i];
			}		
		}
		
		printf("%d\n", numeros[i]);  
	}
	
	return 0;
		
}
