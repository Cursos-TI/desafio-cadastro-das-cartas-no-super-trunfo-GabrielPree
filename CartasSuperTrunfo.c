#include <stdio.h>

int main() {
    //variaveis
    char nome[50];
    int populacao;
    int ponto;
    float area;
    float pib;
    float pibpercapita;
    float densidade;

    //Entrada de dados
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);//usei %[^\n] para que fosse possivel ler espaço no nome da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &ponto);

    //Calculos
    pibpercapita = (float) pib / populacao;//usei casting para garantir a precisão e evitar perda de dados
    densidade = populacao / area;
    
    //Saida de dados
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de pontos turisticos: %d\n", ponto);
    printf("PIB per capita: %2.f\n", pibpercapita);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    return 0;


}