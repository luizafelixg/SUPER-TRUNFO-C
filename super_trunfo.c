#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4]; // ex: A01 (3 caracteres + '\0')
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados para a Carta 1
    printf("\n !!! Cadastro da Carta 1 !!!\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao1);

    printf("Digite a area (em km²): \n");
    scanf(" %f", &area1);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a Carta 2
    printf("\n!!! Cadastro da Carta 2 !!!\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao: \n");
    scanf(" %d", &populacao2);

    printf("Digite a area (em km²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %d", &pontosTuristicos2);

    // Exibição dos dados
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
