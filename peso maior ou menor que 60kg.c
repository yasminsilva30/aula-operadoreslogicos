#include<stdio.h>

main(){

    float peso;

    printf("Digite seu peso em kg (exemplo: 50)");
    scanf("%f", &peso);

    if (peso < 60){
        printf("Voce pesa menos que 60kg");
    
    } else if (peso == 60) {
        printf("Voce pesa exatamente 60kg");
    
    } else if (peso > 60) {
        printf("Voce pesa acima de 60kg");
    }

}