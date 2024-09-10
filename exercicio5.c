// 5. Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
//idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
//casos em que a pessoa é maior ou menor de idade. 

#include <stdio.h>

void verifid(int idade) {
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }
}

int main() {
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    verifid(idade);

    return 0;
}
