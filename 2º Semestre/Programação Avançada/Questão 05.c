#include <stdio.h>

int main(){
  
  char nome[60];
  double SalFixo, SalFinal, vendas;
  
  printf("Nome:\n");
  scanf("%s",&nome);
  printf("Salario:\n");
  scanf("%lf",&SalFixo);
  printf("Vendas (R$)\n");
  scanf("%lf",&vendas);
  
  SalFinal = SalFixo + (0.2*vendas);
  
  printf("Nome: %s\n", nome);
  printf("Salario Fixo: %f\n", SalFixo);
  printf("Salario Final: %f\n", SalFinal);
  
  return 0;
}
