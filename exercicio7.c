//7.  Desenvolva uma função que receba um número inteiro e determine se ele é par ou ímpar. 
//Exiba uma mensagem correspondente para cada caso.

#include <stdio.h>

void pareimpar(int n1) {
    if (n1 % 2 == 0) {
        printf ("Esse número é PAR");
    }else {
        printf ("Esse número é ÍMPAR");
    }
}


int main(){
    int n1;

    printf ("Esreva qualquer número Inteiro: ");
    scanf ("%d", &n1);

    pareimpar(n1);

    return 0;
}


