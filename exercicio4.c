//4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
//triângulo retângulo. 

//Um triângulo é retângulo se o quadrado da hipotenusa (o maior lado) for igual à soma dos quadrados dos outros dois lados. 
//Caso o triângulo seja retângulo, a função deverá informar ao usuário que o triângulo é retângulo,
//caso contrário, não deverá fazer nada. (0.1 ponto)


#include <stdio.h>

void t(int l1, int l2, int l3) {
    int maior, lado1, lado2;

    // Determinando quem é a hipotenusa:
    if (l1 > l2 && l1 > l3) {
        maior = l1;
        lado1 = l2;
        lado2 = l3;
    } else if (l2 > l1 && l2 > l3) {
        maior = l2;
        lado1 = l1;
        lado2 = l3;
    } else {
        maior = l3;
        lado1 = l1;
        lado2 = l2;
    }


    if (maior * maior == lado1 * lado1 + lado2 * lado2) {
        printf("O triângulo é retângulo");
    }

    //sugestão de teste com resultado positivo: informe 3, 4 e 5 (sem uma ordem específica), pois:
    // 3² + 4² = 5²

    //sugestão de teste com resultado negativo: informe 10, 5 e 5 (sem ordem). O erro se dá porque
    //10² = 100, enquanto 5² + 5² = 50
    
    
}

int main() {
    int l1, l2, l3;

    printf("Informe um lado do triângulo: ");
    scanf("%d", &l1);
    printf("Informe outro lado do triângulo: ");
    scanf("%d", &l2);
    printf("Informe o último lado do triângulo: ");
    scanf("%d", &l3);

    t(l1, l2, l3);

    return 0;
}
