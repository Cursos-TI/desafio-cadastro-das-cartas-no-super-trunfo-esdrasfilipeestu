#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[2], estado2[2],
        codigoCarta1[3], codigoCarta2[3],
        nomeCidade1[30], nomeCidade2[30];
    int populacaoCidade1, populacaoCidade2,
        pontosTuristicosCidade1, pontosTuristicosCidade2;
    float areaCidade1, areaCidade2,
        pibCidade1, pibCidade2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Informe o Estado da Carta 1 \n");
    scanf("%s", estado1);

    printf("Informe o Código da Carta 1 \n");
    scanf("%s", codigoCarta1);

    printf("Informe o Nome da Cidade da Carta 1 \n");
    getchar(); // consome o \n que ficou no buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Informe a População da Cidade 1: \n");
    scanf("%d", &populacaoCidade1);

    printf("Informe a Área em KM² da Cidade 1: \n");
    scanf("%f", &areaCidade1);

    printf("Informe o PIB da Cidade 1: \n");
    scanf("%f", &pibCidade1);

    printf("Informe o Número de Pontos Turísticos da Cidade 1: \n");
    scanf("%d", &pontosTuristicosCidade1);

    printf("-------------------------------------------------- \n");

    printf("Informe o Estado da Carta 2: \n");
    scanf("%s", estado2);

    printf("Informe o Código da Carta 2: \n");
    scanf("%s", codigoCarta2);

    printf("Informe o Nome da Cidade da Carta 2 \n");
    getchar(); // consome o \n que ficou no buffer
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Informe a População da Cidade 2: \n");
    scanf("%d", &populacaoCidade2);

    printf("Informe a Área em KM² da Cidade 2: \n");
    scanf("%f", &areaCidade2);

    printf("Informe o PIB da Cidade 2: \n");
    scanf("%f", &pibCidade2);
    
    printf("Informe o Número de Pontos Turísticos da Cidade 2: \n");
    scanf("%d", &pontosTuristicosCidade2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("-------------------------------------------------------- \n");
    printf("---- Carta 1 ---- \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacaoCidade1);
    printf("Área: %f \n", areaCidade1);
    printf("PIB: %f \n", pibCidade1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicosCidade1);

    printf("-------------------------------------------------------- \n");
    printf("---- Carta 2 ---- \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacaoCidade2);
    printf("Área: %f \n", areaCidade2);
    printf("PIB: %f \n", pibCidade2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicosCidade2);
    
    return 0;
}
