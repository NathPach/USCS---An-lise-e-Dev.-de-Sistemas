#include <stdio.h>

int main(){
  
  char nome[60];
  double p1, p2, p3, media;
  
  printf("Nome:\n");
  scanf("%s",&nome);
  printf("Nota 1:\n");
  scanf("%lf",&p1);
  printf("Nota 2:\n");
  scanf("%lf",&p2);
  printf("Nota 3:\n");
  scanf("%lf",&p3);
  
  media= ((p1*2)+(p2*4)+(p3*6))/(p1+p2+p3);
  
  printf("Nome: %s\n", nome);
  printf("Media ponderada: %lf", media);
  
  return 0;
}
