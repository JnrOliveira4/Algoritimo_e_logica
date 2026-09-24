#include <stdio.h>
int main()
{
    float peso, altura, imc;
    
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Digite sdua altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    if(imc <= 20.0){
        printf("=========================\n");
        printf("Você está abaixo do peso.\n");
        printf("=========================\n");
    }   
        else if (imc < 24.9){
        printf("========================\n");
        printf("Você está no peso ideal.\n");
        printf("========================\n");
    }   
        else if (imc < 29.9 ){
        
        printf("========================\n");
        printf("Você está com sobrepeso.\n");
        printf("========================\n");
        
    }   else if(imc < 39.9){
        printf("=================\n");
        printf("Você está imenso.\n");
        printf("=================\n");
        
    }   else{
        printf("==============================\n");
        printf("Você está igual a thais carla.\n");
        printf("==============================\n");
        
    }
    
    return 0;
    
}