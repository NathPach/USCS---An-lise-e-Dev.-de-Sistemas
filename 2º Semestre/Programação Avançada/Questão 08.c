#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL,"Portuguese");
  
  double numeros[10], quadrados[10];
  int i;
  
  for(i=0;i<10;i++){
    printf("Digite um número:\n");
    scanf("%lf",&numeros[i]);
  }
  
  for(i=0;i<10;i++){
    quadrados[i]=numeros[i]*numeros[i];
  }
  
  for(i=0;i<10;i++){
    printf("%.2f %.2f\n", numeros[i],quadrados[i]);
  }
  
  return 0;
}
