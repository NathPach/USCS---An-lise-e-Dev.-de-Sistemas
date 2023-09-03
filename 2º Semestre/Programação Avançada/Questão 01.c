#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	double N1, N2, N3;
	
	printf("Digite um número: ");
	scanf("%lf",&N1);
	printf("Digite um número: ");
	scanf("%lf",&N2);
	printf("Digite um número: ");
	scanf("%lf",&N3);
	
	if(N1>N2 && N1>N3 && N2>N3){
		printf("%lf, %lf, %lf", N3, N2, N1);
	}
	else{
		if(N1>N2 && N1>N3 && N3>N2){
			printf("%lf, %lf, %lf", N2, N3, N1);
		}
		else{
			if(N2>N1 && N2>N3 && N1>N3){
				printf("%lf, %lf, %lf", N3, N1, N2);
			}
			else{
				if(N2>N1 && N2>N3 && N3>N1){
					printf("%lf, %lf, %lf", N1, N3, N2);
				}
				else{
					if(N3>N2 && N3>N1 && N1>N2){
						printf("%lf, %lf, %lf", N2, N1, N3);	
					}
					else{
						printf("%lf, %lf, %lf", N1, N2, N3);	
					}		
				}	
			}	
		}
	}
return 0;
}
