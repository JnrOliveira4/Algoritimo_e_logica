#include <stdio.h>

int main(){
    
    int hora, minutos, total;
    printf("Hora? ");
    scanf("%d", &hora);

    printf ("Minutos? " ); 
    scanf("%d", &minutos);

    total = hora * 60 + minutos;

    printf("Já se passaram %d minutos desde o inicío do dia,\n", total);

    return 0;
}