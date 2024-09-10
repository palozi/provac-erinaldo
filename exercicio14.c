//14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
//turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
//para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
//cada turno e um erro para entradas inválidas.

#include <stdio.h>

int main() {
    
    int turno;
    printf("Qual é o turno do dia?\n 1 - Manhã\n 2 - Tarde\n 3 - Noite\n ");
    scanf("%d", &turno);

    switch(turno){
    
    case 1:
        printf("Boas Vindas ao turno da manhã.");
        break;
    case 2:
        printf("Boas Vindas ao turno da tarde.");
        break;
    case 3:
        printf("Boas Vindas ao turno da noite.");
        break;

    default:
        printf("Você digitou um número que não foi apresentado, amigo.");
        break;
    }
}

