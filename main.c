#include <stdio.h>

//////////////////////////////////////////////////
//declaração de variáveis 

float Vin = 0.0, Vled = 0.0, Iled = 0.0, R = 0.0 ;

int main (int argc, char *argv[])


{
// Introdução do programa

  printf ("Estudo de Calculo de LED, com base na aula do WRKITS https://www.youtube.com/watch?v=hK6EQQLFoCg");
  printf ("\n\n\n");
  
  // Impressão do VIN 
  
printf (" Escreva o valor de VIN (Em volts, por favor.): ");
  
  scanf ("%f", &Vin);
  
  printf ("\n\n");


    // Impressão do VLED 

printf (" Escreva o valor do VLED (Em volts, por favor.): ");
  
  scanf ("%f", &Vled);
  
  printf ("\n\n");

 // Impressão do ILED

  printf (" Escreva o valor do ILED (Em AMPERES, por favor.): ");
  
  scanf ("%f", &Iled);
  
  printf ("\n\n");

  // Declaração de valores

  printf ("Vin - %.2f\n\n", Vin);
   printf ("Vled - %.2f\n\n", Vled);
  printf ("Iled - %.2f\n\n\n", Iled);

  // CÁLCULO DO RESISTOR

  R = (Vin-Vled)/Iled;

  // Declaração do resultado do cálculo

  printf ("O resistor para o led informado possui o valor de %.2f Ohms! \n\n", R);

  
 /////////////////////////////////////////

  system("PAUSE");
  return 0;
  
  
}
