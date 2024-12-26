#include <stdio.h>
#include <math.h>

int tempo() {
    int var1, var2, pot1, pot2;
    float nro;

    // Menu de entrada
  printf("1 - Segundos\n2 - Minutos\n3 - Horas\n");

    do {
        printf("Escreva o número correspondente à unidade de medida original (1, 2 ou 3): ");
        scanf("%i", &var1);
        if (var1 < 1 || var1 > 3) {
            printf("Erro: Unidade original inválida! Por favor, escolha entre 1 (segundos), 2 (minutos) ou 3 (horas).\n");
        }
    } while (var1 < 1 || var1 > 3);

    do {
        printf("Escreva o número correspondente à unidade de medida a ser convertido (1, 2 ou 3): ");
        scanf("%i", &var2);
        if (var2 < 1 || var2 > 3) {
            printf("Erro: Unidade de conversão inválida! Por favor, escolha entre 1 (segundos), 2 (minutos) ou 3 (horas).\n");
        }
    } while (var2 < 1 || var2 > 3);

    do {
        printf("Escreva o número que deseja converter (deve ser positivo): ");
        scanf("%f", &nro);
        if (nro < 0) {
            printf("Erro: O valor a ser convertido não pode ser negativo. Por favor, insira um valor positivo.\n");
        }
    } while (nro < 0);

    // Define as potências baseadas nas unidades
    if (var1 == 1) // Segundos
        pot1 = 0;
    else if (var1 == 2) // Minutos
        pot1 = 1;
    else if (var1 == 3) // Horas
        pot1 = 2;
    else {
        printf("Unidade original inválida!\n");
        return 1; // Erro
    }

    if (var2 == 1) // Segundos
        pot2 = 0;
    else if (var2 == 2) // Minutos
        pot2 = 1;
    else if (var2 == 3) // Horas
        pot2 = 2;
    else {
        printf("Unidade de conversão inválida!\n");
        return 1; // Erro
    }

    // Cálculo da conversão
    int PotF = pot2 - pot1;
    float resultado = nro * pow(60, -PotF); // Usa 60 como base para o cálculo

    // Exibe o resultado
    printf("A conversão de %.2f ", nro);
    switch (var1) {
        case 1: printf("segundos "); break;
        case 2: printf("minutos "); break;
        case 3: printf("horas "); break;
    }
    printf("para ");
    switch (var2) {
        case 1: printf("segundos "); break;
        case 2: printf("minutos "); break;
        case 3: printf("horas "); break;
    }
    printf("é: %.2f\n", resultado);

    // Explicação da conversão
    printf("Dica: Para realizar esta conversão, foi utilizada a seguinte lógica:\n");
    if (PotF == 1) {
        printf("- Multiplicação por 60.\n");
    } else if (PotF == -1) {
        printf("- Divisão por 60.\n");
    } else if (PotF == 2) {
        printf("- Multiplicação por 3600.\n");
    } else if (PotF == -2) {
        printf("- Divisão por 3600.\n");
    } else {
        printf("- Nenhuma conversão foi necessária.\n");
    }

    return 0;
}

int main() {
    tempo();
    return 0;
}
