#include <stdio.h>
    int main(){
        int manha, tarde, total;
        printf("Qual a quantidade de caixas  recebidas pela manhã? ");
        scanf("%d", &manha);

        printf("Qual a quantidade de caixas recebidas pela tarde? ");
        scanf("%d", &tarde);

        total= manha + tarde;
        printf("Total de pedidos recebidos no dia foi de: %d\n",total);

        return 0;
        }
