#include <stdio.h>

int main(){
    // Declaração de variáveis para a carta 1
    char estado1[20], codCarta1[5], nomeCidade1[20];
    int população1, pontosturísticos1, numCarta1;
    float area1, pib1;

    // Declarçãoo de variáveis para a carta 2
    char estado2[20], codcarta2[5], nomeCidade2[20];
    int população2, pontosturísticos2, numCarta2;
    float area2, pib2;

    // --- Entradada dados para a carta 1 ---
    printf("Entrada de Dados Para a Carta 1 \n");
    printf("Digite o numero da carta1: ");
    scanf("%d", &numCarta1);
    printf("Digite o estado: ");
    scanf("%19s:", estado1);
    printf("Digite o codigo da carta: ");
    scanf("%4s:", codCarta1);
    printf("Digite o nome da cidade: ");
    scanf("%19s:", nomeCidade1);
    printf("Digite a População: ");
    scanf("%d", &população1);
    printf("Digite a area (Km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &pontosturísticos1);
    printf("\n");

    // --- Entrada de dados para a Carta 2 ---
    printf("Entrada de dados para a Carta 2 \n");
    printf("Digite o numero da carta: ");
    scanf("%d", &numCarta2);
    printf("Digite o estado: ");
    scanf("%19s", &estado2);
    printf("Digite o codigo da carta: ");
    scanf("%4s", codcarta2);
    printf("Digite o nome da cidade: ");
    scanf("%19s", nomeCidade2);
    printf("Digite a população: ");
    scanf("%d", &população2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosturísticos2);
    printf("\n");

    // --- Saída de dados Carta 1 --- 
    printf("DADOS DA CARTA 1\n");
    printf("Numero da carta: %d\n", numCarta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo da carta: %s\n", codCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", população1);
    printf("Area: %.2f\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("N. de pontos turisticos: %d\n", pontosturísticos1);
    printf("\n");

    // --- Saída de dados Carta 2 ---
    printf("DADOS DA CARTA 2\n");
    printf("Numero da carta: %d\n", numCarta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo da carta: %s\n", codcarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", população2);
    printf("Area: %.2f\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("N. de pontos turísticos: %d\n", pontosturísticos2);
    printf("\n");

    return 0;

}
