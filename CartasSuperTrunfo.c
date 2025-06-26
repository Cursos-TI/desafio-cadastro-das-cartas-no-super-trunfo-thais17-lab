#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char cod_carta[3];
    char cidade[15];
    int populacao;
    float area;
    float pib;
    int num_pontos_t;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código do estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", cod_carta);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);

    printf("Informe o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Informe a área: ");
    scanf("%f", &area);

    printf("Informe o PIB: ");
    scanf("%f", &pib);

    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos_t);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf("\n\nCarta 1:\nEstado: %c\nCódigo: %s \nNome da cidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f\nNúmero de Pontos Turísticos: %d\n\n", estado, cod_carta, cidade, populacao, area, pib, num_pontos_t);
    
    return 0;
}
