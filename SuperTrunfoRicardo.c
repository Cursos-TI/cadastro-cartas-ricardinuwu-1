#include <stdio.h>
#include <string.h>

int main() {
    printf("Bem-vindo ao Super Trunfo das cidades! Cadastre suas cartas:\n");


    //Declaração de variáveis para primeira carta
    char nomeA[15];
    char codA[15];
    char cidadeA[15];
    int populacaoA;
    float areaA;
    float PIBA;
    int pontosA;
    float densidadeA;
    float PIBpercapitaA;

    //Declaração de variáveis para segunda carta
    char nomeB[15];
    char codB[15];
    char cidadeB[15];
    int populacaoB;
    float areaB;
    float PIBB;
    int pontosB;
    float densidadeB;
    float PIBpercapitaB;

    //Cadastro da primeira carta
    printf("Pronto para cadastrar a primeira carta?\n");

    printf("Digite o nome da carta A: ");
    scanf(" %[^\n]", nomeA);

    printf("Digite o código da carta A: ");
    scanf("%s", codA);

    printf("Digite a cidade da carta A: ");
    scanf(" %[^\n]", cidadeA);

    printf("Digite a população da carta A: ");
    scanf("%d", &populacaoA);

    printf("Digite a área da carta A (em km²): ");
    scanf("%f", &areaA);

    printf("Digite o PIB da carta A: ");
    scanf("%f", &PIBA);

    printf("Digite a quantidade de pontos turisticos da carta A: ");
    scanf("%d", &pontosA);

    printf("\n" "Primeira carta cadastrada:\n");
    printf("Nome: %s\n", nomeA);
    printf("Código: %s\n", codA);
    printf("Cidade: %s\n", cidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", PIBA);
    printf("Pontos Turisticos: %d\n", pontosA);
    
    //Cálculo da densidade demográfica e PIB per capita para a carta A 
    densidadeA = (float) populacaoA / areaA;
    PIBpercapitaA = (float) PIBA / populacaoA;

    printf("Densidade demográfica: %.2f habitantes por km²\n", densidadeA);
    printf("PIB per capita: %.7f reais\n", PIBpercapitaA);

    //SuperPoder da carta A

     float SuperPoderA =  populacaoA + areaA + PIBA + pontosA + 1/densidadeA + PIBpercapitaA;
     printf("SuperPoder da carta A: %.2f\n", SuperPoderA);

 //Cadastro da segunda carta
    printf("\n" "Pronto para cadastrar a segunda carta?\n");

    printf("Digite o nome da carta B: ");
    scanf(" %[^\n]", nomeB);

    printf("Digite o código da carta B: ");
    scanf("%s", codB);

    printf("Digite a cidade da carta B: ");
    scanf(" %[^\n]", cidadeB);

    printf("Digite a população da carta B: ");
    scanf("%d", &populacaoB);

    printf("Digite a área da carta B: ");
    scanf("%f", &areaB);

    printf("Digite o PIB da carta B: ");
    scanf("%f", &PIBB);

    printf("Digite a quantidade de pontos turisticos da carta B: ");
    scanf("%d", &pontosB);

    printf("\n" "Segunda carta cadastrada:\n");
    printf("Nome: %s\n", nomeB);
    printf("Código: %s\n", codB);
    printf("Cidade: %s\n", cidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", PIBB);
    printf("Pontos Turisticos: %d\n", pontosB);
    
    //Cálculo da densidade demográfica e PIB per capita para a carta B
    densidadeB = (float) populacaoB / areaB;
    PIBpercapitaB = (float) PIBB / populacaoB;
    
    printf("Densidade demográfica: %.2f habitantes por km²\n", densidadeB);
    printf("PIB per capita: %.7f reais\n", PIBpercapitaB);

    //SuperPoder da carta B

        float SuperPoderB =  populacaoB + areaB + PIBB + pontosB + 1/densidadeB + PIBpercapitaB;
        printf("SuperPoder da carta B: %.2f\n", SuperPoderB);

    //Comparação das cartas
    printf("\n" "Comparando as cartas...\n");

        if (populacaoA > populacaoB) {
            printf("Carta A tem maior população.\n");
        } else if (populacaoA < populacaoB) {
            printf("Carta B tem maior população.\n");
        } else {
            printf("Ambas as cartas têm a mesma população.\n");
        }

        if (areaA > areaB) {
            printf("Carta A tem maior área.\n");
        } else if (areaA < areaB) {
            printf("Carta B tem maior área.\n");
        } else {
            printf("Ambas as cartas têm a mesma área.\n");
        }

        if (PIBA > PIBB) {
            printf("Carta A tem maior PIB.\n"); 
        } else if (PIBA < PIBB) {
            printf("Carta B tem maior PIB.\n");
        } else {
            printf("Ambas as cartas têm o mesmo PIB.\n");
        }

        if (pontosA > pontosB) {
            printf("Carta A tem mais pontos turisticos.\n");
        } else if (pontosA < pontosB) {
            printf("Carta B tem mais pontos turisticos.\n");
        } else {
            printf("Ambas as cartas têm a mesma quantidade de pontos turisticos.\n");
        }    
    
        if(densidadeA > densidadeB) {
            printf("Carta A tem maior densidade demográfica.\n");
        } else if (densidadeA < densidadeB) {
            printf("Carta B tem maior densidade demográfica.\n");
        } else {
            printf("Ambas as cartas têm a mesma densidade demográfica.\n");
        }

        if (PIBpercapitaA > PIBpercapitaB) {
            printf("Carta A tem maior PIB per capita.\n");
        } else if (PIBpercapitaA < PIBpercapitaB) {
            printf("Carta B tem maior PIB per capita.\n");
        } else {
            printf("Ambas as cartas têm o mesmo PIB per capita.\n");
        }
    
        /*Maior populaçãp seria Chongqing — cerca de 32 milhões de habitantes
        acredito que consigo manter o float em SuperPoder com seus 7 digitos de precisão mas
        lembre de executar testes reais para superpoder para garantir que funcione
        sem precisar de double*/
        if (SuperPoderA > SuperPoderB) {
                printf("Carta A tem maior SuperPoder.\n");
            } else if (SuperPoderA < SuperPoderB) {
                printf("Carta B tem maior SuperPoder.\n");
            } else {
                printf("Ambas as cartas têm o mesmo SuperPoder.\n");
            }
            





    return 0;
}