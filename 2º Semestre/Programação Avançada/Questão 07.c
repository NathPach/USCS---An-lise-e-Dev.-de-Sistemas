#include <stdio.h>
#include <locale.h>

int main(){
  
  setlocale(LC_ALL, "Portuguese");
  
  double numeros[10], negativos, soma, media;
  int i;
  
  for(i=0;i<10;i++){
    printf("Digite um número:\n");
    scanf("%lf",&numeros[i]);
  }
  
  for(i=0;i<10;i++){
    if(numeros[i]<0){
      printf("%f\n", numeros[i]);
      negativos++;
      soma += numeros[i];
    }
  }
  
  media= soma/negativos;
  
  printf("Média: %f", media);
  
  return 0;
}
