#include <stdio.h>

int main(){
    //Carta 1
    char Estado1;
    char CódigoCarta1[4];
    char NomeCidade1[50];
    int População1;
    float Área1;
    float PIB1;
    int PontosTuristicos1;

    printf("Carta 1:\n");
    printf("Digite uma letra de A a H: ");
    scanf(" %c", &Estado1);

    printf("Digite a letra do estado seguida de 01 a 04 (ex:G03) ");
    scanf("%s", CódigoCarta1);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", NomeCidade1);

    printf("Digite o número da população: ");
    scanf("%d", &População1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Área1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos1);

    //Carta 2
    char Estado2;
    char CódigoCarta2[4];
    char NomeCidade2[50];
    int População2;
    float Área2;
    float PIB2;
    int PontosTuristicos2;

    printf("\nCarta 2:\n");
    printf("Digite uma letra de A-H: ");
    scanf(" %c", &Estado2);

    printf("Digite a letra do estado seguida de 01-04 (ex:B03): ");
    scanf("%s", CódigoCarta2);

    printf("Digite o nome da cidade (sem espaço): ");
    scanf("%s", NomeCidade2);

    printf("Digite o número da população: ");
    scanf("%d", &População2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Área2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

    //Exibindo as duas cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           Estado1, CódigoCarta1, NomeCidade1, População1, Área1, PIB1, PontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos Turísticos: %d\n",
           Estado2, CódigoCarta2, NomeCidade2, População2, Área2, PIB2, PontosTuristicos2);

    return 0;
}