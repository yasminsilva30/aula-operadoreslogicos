#include<stdio.h>

main(){

    float salario, valorSalario = 1.320;

    printf("Digite o seu salario: ");
    scanf("%f", &salario);

    if (salario < valorSalario){
        printf("Voce ganha menos que um salario minimo :(");

    } else if(salario == valorSalario){
        printf("Voce ganha um salario minimo!!");
    
    } else if(salario > valorSalario) {
        printf("Voce ganha mais que um salario minimo!!");
    }

}