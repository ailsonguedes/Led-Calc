#include <stdio.h>
#include <stdlib.h>

float vin  = 0.0,
      vled = 0.0,
      iled = 0.0,
      r    = 0.0;

int sel = 0;

int main(int argc, char *argv[]){

  printf(" LED CALC v1.0 \n\n");
  printf(" Autor: Ailson Guedes\n\n");
  printf("\n\n");

  printf(" Deseja iniciar o calculo do resistor? \n");
  printf(" 1 - Sim | 0 - Não: ");
  scanf("%i", &sel);
  printf("\n\n");

  while (sel == 1){

    printf(" Digite o valor de Vin (em Volts): ");
    scanf("%f", &vin);
    printf("\n");
  
    printf(" Digite o valor de Vled (em Volts): ");
    scanf("%f", &vled);
    printf("\n");
  
    printf(" Digite o valor de Iled (em Amperes): ");
    scanf("%f", &iled);
    printf("\n\n");

    r = (vin - vled) / iled;

    printf(" Vin = %.2f\n\n", vin);
    printf(" Vled = %.2f\n\n", vled);
    printf(" Iled = %.2f\n\n", iled);
    printf(" O resistor para o LED = %.2f Ohms\n\n", r);
    printf("\n");

    printf(" Deseja continuar calculando?\n");
    printf(" 1 - Sim | 0 - Não: ");
    
    scanf("%i", &sel);
  }
  
  printf("\n\n");
  printf(" Obrigado por utilizar o LED CALC v1.0\n");

  return 0;
}
