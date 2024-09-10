//. 1Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
//for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
//por essa razão, limite a verificação a um conjunto pequeno de números para
//verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.

#include <stdio.h>


void primo(int n1){
    if (n1 == 2 || n1 == 3 || n1 == 5 || n1 == 7) {
        printf("1");
    }
}


int main() {
    int n1;

    printf ("Escreva um número de 1 a 10: ");
    scanf ("%d", &n1);

     primo(n1);

    

 return 0;
}



/*
//. 1Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
//for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
//por essa razão, limite a verificação a um conjunto pequeno de números para
//verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.

#include <stdio.h>


int primo(int n1){
    if (n1 == 2 || n1 == 3 || n1 == 5 || n1 == 7) {
        return 1;
    } else{
        return 0;
       }
}


int main() {
    int n1;

    printf ("Escreva um número de 1 a 10: ");
    scanf ("%d", &n1);

     primo(n1);

    

 return 0;
}
*/