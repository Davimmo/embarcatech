#include <stdio.h>

// Função para converter temperaturas
double converter_temperatura(double valor, int origem, int destino) {
    double kelvin;

    // Converter de origem para Kelvin
    switch (origem) {
        case 1: // Celsius
            kelvin = valor + 273.15;
            break;        
        case 2: // Fahrenheit
            kelvin = (valor - 32) * 5.0 / 9.0 + 273.15;
            break;
        case 3: // Kelvin
            kelvin = valor;
            break;

        default:
            printf("Número escolhido fora do intervalo. \nUse 1 para Celsius, 2 para Fahrenheit ou 3 para Kelvin.\n");
            return -1;
    }

    // Converter de Kelvin para destino
    switch (destino) {
        case 1: // Celsius
            return kelvin - 273.15;
        case 2: // Fahrenheit
            return (kelvin - 273.15) * 9.0 / 5.0 + 32;
        case 3: // Kelvin
            return kelvin;

        default:
            printf("Unidade de destino desconhecida. Use 1 para Celsius, 2 para Fahrenheit ou 3 para Kelvin.\n");
            return -1;
    }
}

int main() {
    float valor;
    int origem, destino;

    printf("Digite a unidade de origem (1 para Celsius, 2 para Fahrenheit, 3 para Kelvin): ");
    if (scanf("%d", &origem) != 1 || origem < 1 || origem > 3) {
        printf("Por favor, insira uma unidade de origem válida.\n");
        return 1;
    }

    // Solicitar entrada do usuário
    printf("Digite o valor da temperatura com ponto ao invés de virgula (Ex: 273.69): ");
    if (scanf("%f", &valor) != 1) {
        printf("Por favor, insira um valor numérico válido para a temperatura.\n");
        return 1;
    }

    // Verificar se o valor está abaixo do zero absoluto
    if ((origem == 1 && valor < -273.15) || // Celsius
        (origem == 2 && valor < -459.67) || // Fahrenheit
        (origem == 3 && valor < 0)) {       // Kelvin
        printf("O valor digitado corresponde a menos que o zero absoluto, não é possível atingir essa temperatura.\n");
        return 1;
    }

    printf("Digite a unidade de destino (1 para Celsius, 2 para Fahrenheit, 3 para Kelvin): ");
    if (scanf("%d", &destino) != 1 || destino < 1 || destino > 3) {
        printf("Por favor, insira uma unidade de destino válida.\n");
        return 1;
    }

    double resultado = converter_temperatura(valor, origem, destino);


    
    if (resultado != -1) {
        printf("A temperatura convertida para a unidade %d é: %.2f\n", destino, resultado);
    }

    return 0;
}
