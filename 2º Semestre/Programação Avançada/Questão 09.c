#include <stdio.h>
#include <locale.h>

int main(){
  
  setlocale(LC_ALL,"Portuguese");
  
  double notas[15], media;
  int i, count;
  
  for(i=0;i<15;i++){
    printf("Digite a nota da prova:\n");
    scanf("%lf",&notas[i]);
  }
  
  for(i=0;i<15;i++){
    media += notas[i];
  }
  
  media = media/15;
  
  for(i=0;i<15;i++){
    if(notas[i]<media){
      count++;
    }
  }
  
  printf("Media: %f\nAlunos abaixo da média: %d",media,count);
  
  return 0;
}
