#include <stdio.h>

void notageral(float nota) {
    if (nota >= 9.0) {
        printf ("A");
    }
    else if (nota >= 7.0 && nota < 9.0) {
        printf ("B");
    }
    else if (nota >= 5.0 && nota < 7.0) {
        printf ("C");
    }
    else if (nota < 5.0) {
        printf ("D");
    }
}

int main () {
    float nota;

    printf("Informe a nota do aluno: ");
    scanf("%f", &nota);

    if(nota < 0 || nota > 10){
        printf("Você digitou uma nota fora do intervalo, amigão. ME AJUDA A TE AJUDAR, PÔ!");
    }

    notageral(nota);

    return 0;

}