#include <stdio.h>
int main (){
    float potencia, horas_dias, consumo;

    printf("Digite o valor em (W): ");
    scanf("%f", &potencia);

    printf("Digite o número de horas por dia: ");
    scanf("%f", &horas_dias);

    consumo =  (potencia * horas_dias * 30) / 1000;

    printf("=====================================================\n");
    printf("=====================Resultado=======================\n");
    printf("=====================================================\n");
    printf("O consumo mensal em (W) na sua casa foi de %f", consumo);
    
    return 0;
}
    