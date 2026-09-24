#include <stdio.h>
int main()
{
    int qtdparcela, juros;
    float valordaparcela, valordacompra, valorfinal;
    
    printf("Digite o valor da compra: ");
    scanf("%f", &valordacompra);
    
    printf("Digite o número de parcelas: ");
    scanf("%d", &qtdparcela);
    
    switch (qtdparcela){
        case 2: juros = 3;
            break;
        case 4: juros = 7;
            break;
        case 6: juros = 9;
            break;
        case 8: juros = 12;
            break;
        default: -1;
            break;
    }
    if (juros == -1){
        printf("Número de parcelas invalido, por favor digite um número de parcelas valido para proseguir.");
        
    }else if(qtdparcela){
        
     valorfinal = valordacompra + valordacompra * juros / 100;
     valordaparcela = valorfinal/qtdparcela;
     printf("O valor final de cada parcela é de %.2f", valordaparcela);
        
    }
    
    return 0;
}