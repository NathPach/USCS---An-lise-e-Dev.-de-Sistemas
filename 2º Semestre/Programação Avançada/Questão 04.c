#include <stdio.h>

int main(){
  
  double N1, N2, soma, sub, mult, div;
  printf("Digite um numero:\n");
  scanf("%lf", &N1);
  printf("Digite um numero:\n");
  scanf("%lf", &N2);
  
  soma = N1+N2;
  sub = N1- N2;
  mult = N1 * N2;
  div = N1/N2;
  
  printf("Soma = %f\n", soma);
  printf("Subtracao = %f\n", sub);
  printf("Multiplicacao = %f\n", mult);
  printf("Divisao = %f\n", div);
  
  return 0;
}
