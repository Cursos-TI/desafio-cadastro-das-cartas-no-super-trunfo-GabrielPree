#include <stdio.h>

 //variaveis globais
    char nome[50];
    int populacao;
    int ponto;
    float area;
    double pib;
    double pibpercapita;
    float densidade;

//Função genérica para entrada de dados
void entradaDados() {
    //código para a função entrada de Dados
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);//usei %[^\n] para que fosse possivel ler espaço no nome da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &ponto);
}
 
// Função genérica para cálculos do PIB per capita e densidade populacional
float calculos() {
    // código para a função calculos
    pibpercapita = (float) pib / populacao;//usei casting para garantir a precisão e evitar perda de dados
    densidade = populacao / area;
}
 
// Função genérica para exibir dados
void exibirDados() {
    // código para a função exibirDados
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Numero de pontos turisticos: %d\n", ponto);
    printf("PIB per capita: %.2lf\n", pibpercapita);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
}
 
int main() {
 
    entradaDados();
    calculos();
    exibirDados();
    return 0;
}