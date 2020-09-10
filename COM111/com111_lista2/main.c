#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "complex.h"

int main() {
    complexo *real, *imag, *resultado;
    float x, y;
    int opc;

    setlocale(LC_ALL, "Portuguese");
    
    do {
        printf("\n\n-=-=-=-=-=-=-=-=-=-=-=-=- Números Complexos -=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Sair\n\n");
        printf("Digite sua Escolha: ");
        scanf(" %d", &opc);

        if (opc >= 1 && opc < 5) {
            for (int i = 0; i < 2; i++) {
                printf("\nDigite o número real [A]: ");
                scanf(" %f", &x);
                printf("Digite o número imaginário [B]: ");
                scanf(" %f", &y);
                if (i == 0) {
                    real = criaComplexo(x, y);
                } else if (i == 1) {
                    imag = criaComplexo(x, y);
                }
            }
        }

        switch (opc) {
        case 1:
            resultado = somaComplexa(real, imag);

            imprimeNumComplex(resultado);

            liberaComplexo(real);
            liberaComplexo(imag);
            break;
        
        case 2:
            resultado = subComplexa(real, imag);

            imprimeNumComplex(resultado);

            liberaComplexo(real);
            liberaComplexo(imag);
            break;

        case 3:
            resultado = multComplexa(real, imag);

            imprimeNumComplex(resultado);

            liberaComplexo(real);
            liberaComplexo(imag);
            break;

        case 4:
            resultado = divComplexa(real, imag);

            imprimeNumComplex(resultado);

            liberaComplexo(real);
            liberaComplexo(imag);
            break;

        default:
            break;
        }
    } while (opc != 5);

    return 0;
}