#include <stdio.h>
// Desafio Super Trunfo - PaÃ­ses
// Tema 1 - Cadastro das Cartas
// Este cÃ³digo inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentÃ¡rios para implementar cada parte do desafio.
//Teste larissa

int main() {
    // SugestÃ£o: Defina variÃ¡veis separadas para cada atributo da cidade.
    // Exemplos de atributos: cÃ³digo da cidade, nome, populaÃ§Ã£o, Ã¡rea, PIB, nÃºmero de pontos turÃ­sticos.
    char nome[50];
    int populacao;
    int ponto;
    float area;
    float pib;
    // Cadastro das Cartas:
    // SugestÃ£o: Utilize a funÃ§Ã£o scanf para capturar as entradas do usuÃ¡rio para cada atributo.
    // Solicite ao usuÃ¡rio que insira as informaÃ§Ãµes de cada cidade, como o cÃ³digo, nome, populaÃ§Ã£o, Ã¡rea, etc.
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);
    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);
    
    // ExibiÃ§Ã£o dos Dados das Cartas:
    // SugestÃ£o: Utilize a funÃ§Ã£o printf para exibir as informaÃ§Ãµes das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Nome da Cidade: %s\n", nome);
    printf("Populacao: %d\n", populacao);
}