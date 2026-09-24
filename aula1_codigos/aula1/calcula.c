#include <stdio.h>

int main (){
    int n1, n2;
    int soma, subtracao, multiplicacao;
    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    soma = n1 + n2;
    subtracao = n1 - n2;
    multiplicacao = n1 * n2;

    printf("=====================================================\n");
    printf("=====================Resultado=======================\n");
    printf("=====================================================\n");
    printf("A soma dos numeros digitados é %d\n", soma);
    printf("A subtracao dos numeros digitados é %d\n", subtracao);
    printf("A multiplicacao dos numeros figitados é %d\n", multiplicacao);
}