#include<stdio.h>

main(){

    float altura, alturaRequisitada = 1.80;

    printf("Digite a sua altura (exemplo: 1.60): ");
    scanf("%f", &altura);

    if (altura < alturaRequisitada){
        printf("Voce eh menor que 1.80m!!");
    
    } else if (altura == alturaRequisitada){
        printf("Voce tem exatamente 1.80m!!");
    
    } else if (altura > alturaRequisitada){
        printf("Voce eh menor que 1.80!!");
    }

}