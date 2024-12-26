#include <stdio.h>
#include <math.h>

void conversao_armazenamento(double valor, char origem, char destino) {
    // Valores CONSTANTES em relação aos bits
    const double BITS_EM_BYTE = 8;
    const double BYTES_EM_KB = 1024;
    const double KB_EM_MB = 1024;
    const double MB_EM_GB = 1024;
    const double GB_EM_TB = 1024;

    // Conversão do valorpara bits
    double bits;
    switch (origem) {
        case 'b':
            bits = valor;
            break;
        case 'B':
            bits = valor * BITS_EM_BYTE;
            break;
        case 'K':
            bits = valor * BYTES_EM_KB * BITS_EM_BYTE;
            break;
        case 'M':
            bits = valor * KB_EM_MB * BYTES_EM_KB * BITS_EM_BYTE;
            break;
        case 'G':
            bits = valor * MB_EM_GB * KB_EM_MB * BYTES_EM_KB * BITS_EM_BYTE;
            break;
        case 'T':
            bits = valor * GB_EM_TB * MB_EM_GB * KB_EM_MB * BYTES_EM_KB * BITS_EM_BYTE;
            break;
        default:
            printf("Unidade de origem inválida!\n");
            return;
    }

    // Conversão do valor em bits para a unidade de destino
    double resultado;
    switch (destino) {
        case 'b':
            resultado = bits;
            break;
        case 'B':
            resultado = bits / BITS_EM_BYTE;
            break;
        case 'K':
            resultado = bits / (BITS_EM_BYTE * BYTES_EM_KB);
            break;
        case 'M':
            resultado = bits / (BITS_EM_BYTE * BYTES_EM_KB * KB_EM_MB);
            break;
        case 'G':
            resultado = bits / (BITS_EM_BYTE * BYTES_EM_KB * KB_EM_MB * MB_EM_GB);
            break;
        case 'T':
            resultado = bits / (BITS_EM_BYTE * BYTES_EM_KB * KB_EM_MB * MB_EM_GB * GB_EM_TB);
            break;
        default:
            printf("Unidade de destino inválida!\n");
            return;
    }

    printf("%.2lf na unidade '%c' equivale a %.2lf na unidade '%c'\n", valor, origem, resultado, destino);
}

int main() {
    double valor;
    char origem, destino;

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    printf("Digite a unidade de origem (b = bits, B = bytes, K = kilobytes, M = megabytes, G = gigabytes, T = terabytes): ");
    scanf(" %c", &origem);

    printf("Digite a unidade de destino (b = bits, B = bytes, K = kilobytes, M = megabytes, G = gigabytes, T = terabytes): ");
    scanf(" %c", &destino);

    conversao_armazenamento(valor, origem, destino);

    return 0;
}
