#include <stdio.h>
#include <math.h>

// Função para converter unidades de tempo
int tempo() {
    int unidadeOrigem, unidadeDestino, potOrigem, potDestino;
    float valor;

    // Exibir o menu de opções
    printf("1 - Segundos\n2 - Minutos\n3 - Horas\n");

    // Solicitar a unidade de medida original
    do {
        printf("Escolha a unidade de medida original (1, 2 ou 3): ");
        scanf("%i", &unidadeOrigem);
        if (unidadeOrigem < 1 || unidadeOrigem > 3) {
            printf("Erro: Unidade original inválida! Por favor, escolha entre 1 (segundos), 2 (minutos) ou 3 (horas).\n");
        }
    } while (unidadeOrigem < 1 || unidadeOrigem > 3);

    // Solicitar a unidade de medida a ser convertida
    do {
        printf("Escolha a unidade de medida a ser convertida (1, 2 ou 3): ");
        scanf("%i", &unidadeDestino);
        if (unidadeDestino < 1 || unidadeDestino > 3) {
            printf("Erro: Unidade de conversão inválida! Por favor, escolha entre 1 (segundos), 2 (minutos) ou 3 (horas).\n");
        }
    } while (unidadeDestino < 1 || unidadeDestino > 3);

    // Solicitar o valor a ser convertido
    do {
        printf("Digite o valor que deseja converter (deve ser positivo): ");
        scanf("%f", &valor);
        if (valor < 0) {
            printf("Erro: O valor a ser convertido não pode ser negativo. Por favor, insira um valor positivo.\n");
        }
    } while (valor < 0);

    // Definir as potências baseadas nas unidades
    switch (unidadeOrigem) {
        case 1: potOrigem = 0; break; // Segundos
        case 2: potOrigem = 1; break; // Minutos
        case 3: potOrigem = 2; break; // Horas
        default: return 1; // Erro
    }

    switch (unidadeDestino) {
        case 1: potDestino = 0; break; // Segundos
        case 2: potDestino = 1; break; // Minutos
        case 3: potDestino = 2; break; // Horas
        default: return 1; // Erro
    }

    // Calcular a conversão
    int diferencaPot = potDestino - potOrigem;
    float resultado = valor * pow(60, -diferencaPot); // Usa 60 como base para o cálculo

    // Exibir o resultado
    printf("A conversão de %.2f ", valor);
    switch (unidadeOrigem) {
        case 1: printf("segundos "); break;
        case 2: printf("minutos "); break;
        case 3: printf("horas "); break;
    }
    printf("para ");
    switch (unidadeDestino) {
        case 1: printf("segundos "); break;
        case 2: printf("minutos "); break;
        case 3: printf("horas "); break;
    }
    printf("é: %.2f\n", resultado);

    // Explicar a lógica da conversão
    printf("Dica: Para realizar esta conversão, foi utilizada a seguinte lógica:\n");
    switch (diferencaPot) {
        case 1: printf("- Multiplicação por 60.\n"); break;
        case -1: printf("- Divisão por 60.\n"); break;
        case 2: printf("- Multiplicação por 3600.\n"); break;
        case -2: printf("- Divisão por 3600.\n"); break;
        default: printf("- Nenhuma conversão foi necessária.\n"); break;
    }

    return 0;
}

int main() {
    tempo();
    return 0;
}
