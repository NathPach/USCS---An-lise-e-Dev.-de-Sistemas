#include <stdio.h>
int main(){
  
double base, altura, área;
printf(“Digite o valor da base do triangulo:\n”);
scanf(“%lf”, &base);
printf(“Digite o valor da altura do triangulo:\n”);
scanf(“%lf”, &altura);
  
area=(base*altura)/2;
  
printf(“Area = %lf/n”, area);
  
return 0;
}
