#include <stdio.h>

// Função para calcular o valor do lucro do distribuidor
float calcularLucro(float precoFabrica, float percentualLucro) {
    return precoFabrica * (percentualLucro / 100);
}

// Função para calcular o valor dos impostos
float calcularImpostos(float precoFabrica, float percentualImposto) {
    return precoFabrica * (percentualImposto / 100);
}

// Função para calcular o preço final do veículo
float calcularPrecoFinal(float precoFabrica, float percentualLucro, float percentualImposto) {
    float lucro = calcularLucro(precoFabrica, percentualLucro);
    float impostos = calcularImpostos(precoFabrica, percentualImposto);
    return precoFabrica + lucro + impostos;
}

int main() {
    float precoFabrica, percentualLucro, percentualImposto;

    // Entrada de dados
    printf("Digite o preço de fábrica do carro: ");
    scanf("%f", &precoFabrica);

    printf("Digite o percentual de lucro do distribuidor: ");
    scanf("%f", &percentualLucro);

    printf("Digite o percentual de impostos sobre o preço de fábrica: ");
    scanf("%f", &percentualImposto);

    // Cálculos
    float lucro = calcularLucro(precoFabrica, percentualLucro);
    float impostos = calcularImpostos(precoFabrica, percentualImposto);
    float precoFinal = calcularPrecoFinal(precoFabrica, percentualLucro, percentualImposto);

    // Saída dos resultados
    printf("\nValor do lucro do distribuidor: R$ %.2f\n", lucro);
    printf("Valor dos impostos: R$ %.2f\n", impostos);
    printf("Preço final do veículo: R$ %.2f\n", precoFinal);

    return 0;
}