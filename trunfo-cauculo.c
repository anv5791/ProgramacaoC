#include <stdio.h>
//Define [numero de cartas] [Define tamanho do código das cartas]
//Define [quantidade das cidades] [define tamanho do nome das cidades]
//Define numero de população de cada cidade
//Define area de cada para cada cidade
//Define o PIB de cada cidade
//Define quantos pontos turístico tem cada cidade
int main() {

    char codigocidade[32] [4] = {"A01","A02","A03","A04","B01","B02","B03","B04",
    "C01","C02","C03","C04","D01","D02","D03","D04",
    "E01","E02","E03","E04","F01","F02","F03","F04",
    "G01","G02","G03","G04","H01","H02","H03","H04"};
    char nomecidade[32] [20];
    int populacao [32];
    float area [32];
    double pib [32];
    int numeropontoturistico [32];
    float densidade [32];
    float pibpercapita [32];



    printf("Entre com o nome da Cidade %s\n", codigocidade[0]);
    scanf("%s", nomecidade[0]);
    printf("Qual é a população da cidade %s?\n", nomecidade[0]);
    scanf(" %d", &populacao[0]);
    printf("Qual a área da cidade %s?\n", nomecidade[0]);
    scanf(" %f", &area[0]);
    printf("Qual é o PIB da cidade %s?\n", nomecidade[0]);
    scanf(" %lf", &pib[0]);
    printf("Quantos pontos turísticos tem na cidade %s?\n", nomecidade[0]);
    scanf("%d", &numeropontoturistico[0]);
    densidade[0] =  populacao[0] / area[0];
    printf("\n");

    printf("Carta %s\n", codigocidade[0]);
    printf("Cidade: %s\n", nomecidade[0]);
    printf("População total da cidade: %d milhões de pessoas\n", populacao[0]);
    printf("Área Total: %.2f Km²\n", area[0]);
    printf("PIB total da cidade de %s é: %.2lf milhões de dolares\n", nomecidade[0], pib[0]);
    printf("Número de pontos turísticos: %d\n", numeropontoturistico[0]);
    printf("Densidade Populacional de %s: %.2f hab./km²\n\n", nomecidade[0], densidade[0]);
    return 0;

}