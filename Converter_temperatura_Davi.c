#include <stdio.h>
#include <string.h>

// Função para converter temperaturas
double converter_temperatura(double valor, char origem[], char destino[]) {
    double celsius;

    // Converter de origem para Celsius
    if (strcmp(origem, "fahrenheit") == 0) {
        celsius = (valor - 32) * 5.0 / 9.0;
    } else if (strcmp(origem, "kelvin") == 0) {
        celsius = valor - 273.15;
    } else if (strcmp(origem, "celsius") == 0) {
        celsius = valor;
    } else {
        printf("Unidade de origem desconhecida. Use 'fahrenheit', 'celsius' ou 'kelvin'.\n");
        return -1;
    }

    // Converter de Celsius para destino
    if (strcmp(destino, "fahrenheit") == 0) {
        return celsius * 9.0 / 5.0 + 32;
    } else if (strcmp(destino, "kelvin") == 0) {
        return celsius + 273.15;
    } else if (strcmp(destino, "celsius") == 0) {
        return celsius;
    } else {
        printf("Unidade de destino desconhecida. Use 'fahrenheit', 'celsius' ou 'kelvin'.\n");
        return -1;
    }
}

int main() {
    double valor;
    char origem[20], destino[20];

    // Solicitar entrada do usuário
    printf("Digite o valor da temperatura: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Por favor, insira um valor numérico válido para a temperatura.\n");
        return 1;
    }

    printf("Digite a unidade de origem (fahrenheit, celsius, kelvin): ");
    scanf("%s", origem);

    printf("Digite a unidade de destino (fahrenheit, celsius, kelvin): ");
    scanf("%s", destino);

    double resultado = converter_temperatura(valor, origem, destino);

    if (resultado != -1) {
        printf("A temperatura convertida para %s é: %.2f\n", destino, resultado);
    }

    return 0;
}
