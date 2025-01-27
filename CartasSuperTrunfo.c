#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome[20];	
    int população;
    int ponto;
    float area;
    float pib;
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o nome da cidade: ");-
    scanf("%s", nome);//nome da cidade

    printf("Digite a população da cidade: ");
    scanf("%d", &população);//população da cidade

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &ponto);//pontos turísticos da cidade

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);//área da cidade

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);//PIB da cidade
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome da cidade: %s\n", nome);//mostra o nome da cidade
    printf("População: %d\n", população);//mostra a população da cidade
    printf("Número de pontos turísticos: %d\n", ponto);//mostra o número de pontos turísticos da cidade
    printf("Área: %.2f km²\n", area);//mostra a área da cidade
    printf("PIB: %.2f bilhões\n", pib);//Mostra o PIB da cidade
    return 0;
    }