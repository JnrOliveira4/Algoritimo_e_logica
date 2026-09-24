#include <stdio.h>
#include <math.h>
int main (){
   double   peso, altura, imc;

   printf("Qual é o peso da pessoa em kg: ");
   scanf("%lf", &peso);

   printf("Qual é a altura da pessoa em metros: ");
   scanf("%lf", &altura);

   imc = peso / pow(altura, 2);

   printf("O índice de massa corporal é %.2f kg/m²\n", imc);

   return 0;
}
    