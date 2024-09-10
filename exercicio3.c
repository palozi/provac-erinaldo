// 3. Crie uma função que receba três lados de um triângulo e verifique se esses lados
//formam um triângulo válido. 


//Um triângulo é válido se a soma de dois de seus lados for sempre maior que o terceiro. 
//Caso o triângulo seja válido, a função deverá retornar 1. Caso contrário, não deve retornar nada.

#include <stdio.h>

void t(int l1, int l2, int l3){
     if ((l1+l2 > l3) && (l1+l3 > l2) && (l3+l2 > l1)){
        printf("1");
    }
}

int main () {
    int l1, l2, l3;

    printf ("Informe o primeiro lado do triângulo: ");
    scanf ("%d", &l1);
    printf ("Informe o segundo lado do triângulo: ");
    scanf ("%d", &l2);
    printf ("Informe o terceiro lado do triângulo: ");
    scanf ("%d", &l3);

    t(l1, l2, l3);

    return 0;
}




/*
#include <stdio.h>

int t(int l1, int l2, int l3){
     if ((l1+l2 > l3) && (l1+l3 > l2) && (l3+l2 > l1)){
        return 1;
    }else {
        return 0;
    }
}

int main () {
    int l1, l2, l3;

    printf ("Informe o primeiro lado do triângulo");
    scanf ("%d", &l1);
    printf ("Informe o segundo lado do triângulo");
    scanf ("%d", &l2);
    printf ("Informe o terceiro lado do triângulo");
    scanf ("%d", &l3);

    t(l1, l2, l3);

    return 0;
}
*/