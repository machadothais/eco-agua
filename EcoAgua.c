#include <stdio.h>

int main() {
    int moradores;
    float consumoMensal;
    float valorConta;
    float consumoPorPessoa;
    float valorPorMetroCubico;

    printf("=============================================\n");
    printf(" SISTEMA DE ORIENTACAO PARA ECONOMIA DE AGUA \n");
    printf("=============================================\n\n");

    printf("Informe a quantidade de moradores da residencia: ");
    scanf("%d", &moradores);

    printf("Informe o consumo mensal de agua em metros cubicos (m3): ");
    scanf("%f", &consumoMensal);

    printf("Informe o valor total da conta de agua: R$ ");
    scanf("%f", &valorConta);

    printf("\n------------ RESULTADO DA ANALISE ------------\n");

    if (moradores <= 0) {
        printf("Erro: a quantidade de moradores deve ser maior que zero.\n");
    } else if (consumoMensal <= 0) {
        printf("Erro: o consumo mensal deve ser maior que zero.\n");
    } else if (valorConta < 0) {
        printf("Erro: o valor da conta nao pode ser negativo.\n");
    } else {
        consumoPorPessoa = (consumoMensal * 1000) / 30 / moradores;
        valorPorMetroCubico = valorConta / consumoMensal;

        printf("Consumo medio diario por pessoa: %.2f litros\n", consumoPorPessoa);
        printf("Valor aproximado por metro cubico: R$ %.2f\n", valorPorMetroCubico);

        if (consumoPorPessoa <= 110) {
            printf("Classificacao: consumo adequado.\n");
            printf("Orientacao: continue mantendo bons habitos de economia de agua.\n");
        } else if (consumoPorPessoa <= 150) {
            printf("Classificacao: consumo em nivel de atencao.\n");
            printf("Orientacao: tente reduzir o tempo de banho e evite torneiras abertas sem necessidade.\n");
        } else {
            printf("Classificacao: consumo alto.\n");
            printf("Orientacao: verifique possiveis vazamentos e reveja os habitos de uso da agua.\n");
        }
    }

    printf("----------------------------------------------\n");
    printf("Programa finalizado.\n");

    return 0;
}