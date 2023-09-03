#include <stdio.h>
#include <locale.h>

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
  double numeros[10];
  int i,j;
  
  for(i=0;i<10;i++){
    printf("Digite um número:\n");
    scanf("%lf",&numeros[i]);
  }
  
  for (i = 0; i < 10; i++) {
    for (j = i + 1; j < 10; j++) {
      if (numeros[i] == numeros[j]) {
        printf("Valores iguais encontrados: %f e %f\n", numeros[i], numeros[j]);
      }
    }
  }
  
  return 0;
}
