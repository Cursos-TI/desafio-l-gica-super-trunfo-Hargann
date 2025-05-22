#include <stdio.h>
int main(){

    //Nível Novato
    char estado1 = 'A', codigo1[5] = "A01", nome1[30];
    char estado2 = 'B', codigo2[5] = "B02", nome2[30];

    int popl1, popl2;
    int pontos1, pontos2;

    float area1, area2;
    float pib1, pib2;

    printf("Seja bem-vindo ao Jogo de Cartas Super Trunfo!\n");
    int opcao;
    printf("Escolha a opção:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Sair\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Iniciando o Jogo...\n");
        case 2:
            printf("Saindo do Jogo...\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    printf(" Carta 1: \n");
    printf(" Estado: %c\n", estado1);
    printf(" Codigo da Carta: %s\n", codigo1);
    printf(" Digite o Nome do Estado:\n");
    scanf("%s", nome1);
    printf(" Digite a Populacao:\n");
    scanf("%d", &popl1);
    printf(" Digite a Área:\n");
    scanf("%.2f", &area1);
    printf(" Digite o PIB: \n");
    scanf("%2.f", &pib1);
    printf(" Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos1);

    printf(" \n Carta 2: \n");
    printf(" Estado: %c\n", estado2);
    printf(" Codigo da Carta: %s\n", codigo2);
    printf(" Digite o Nome do Estado:");
    scanf("%s", nome2);
    printf(" Digite a Populacao: \n");
    scanf("%d", &popl2);
    printf(" Digite a Área:\n");
    scanf("%.2f", &area2);
    printf(" Digite o PIB: \n");
    scanf("%2.f", &pib2);
    printf(" Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontos2);

    //Nível Aventureiro
    float denspopul1 = (float) popl1 / area1;
    float denspopul2 = (float) popl2 / area2;

    float pibpercpt1 = (float) pib1 / popl1;
    float pibpercpt2 = (float) pib2 / popl2;

    printf(" \n Carta 1: \n");
    printf(" Densidade populacional: %.2f hab/km^2\n", denspopul1);
    printf(" PIB per capita: R$ %.2f\n", pibpercpt1);
    printf(" \n Carta 2: \n");
    printf(" Densidade populacional: %.2f hab/km^2\n", denspopul2);
    printf(" PIB per capita: R$ %.2f\n", pibpercpt2);

    //Nível Mestre
    float superpoder1 = popl1 + area1 + pib1 + pontos1 + denspopul1 + pibpercpt1;
    float superpoder2 = popl2 + area2 + pib2 + pontos2 + denspopul2 + pibpercpt2;
    printf(" \n Carta 1: \n");
    printf(" Super Poder: %.2f\n", superpoder1);
    printf(" \n Carta 2: \n");
    printf(" Super Poder: %.2f\n", superpoder2);

    //Comparação
    printf("\n Comparação de Cartas \n");
    
    printf("Escolha o Atributo para Comparação:\n");
    printf("1. População\n");
    printf("2. Pontos Turísticos\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");

    printf("**Escolha o Número do Atributo**\n");
    int comparacao;
    scanf("%d", &comparacao);

    switch (comparacao) {
        case 1:
        printf("\n Atributo: População: \n");
        printf("Carta 1: %s: %d\n", nome1, popl1);
        printf("Carta 2: %s: %d\n", nome2, popl2);
            if(popl1 > popl2){
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(popl1 == popl2){
                printf("Resultado: Empate!\n");
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } 
            break;
        case 2:
        printf("\n Atributo: Pontos Turísticos: \n");
        printf("Carta 1: %s: %d\n", nome1, pontos1);
        printf("Carta 2: %s: %d\n", nome2, pontos2);
            if(pontos1 > pontos2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pontos1 == pontos2){
            printf("Resultado: Empate!\n");
            } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;
        case 3:
        printf("\n Atributo: Área: \n");
        printf("Carta 1: %s: %.2f km^2\n", nome1, area1);
        printf("Carta 2: %s: %.2f km^2\n", nome2, area2);
            if(area1 > area2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(area1 == area2){
            printf("Resultado: Empate!\n");
            } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;
        case 4:
        printf("\n Atributo: PIB: \n");
        printf("Carta 1: %s: R$ %.2fB\n", nome1, pib1);
        printf("Carta 2: %s: R$ %.2fB\n", nome2, pib2);
            if(pib1 > pib2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pib1 == pib2){
            printf("Resultado: Empate!\n");
            } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;
        case 5:
        printf("\n Atributo: Densidade populacional: \n");
        printf("Carta 1: %s: %.2f hab/km^2\n", nome1, denspopul1);
        printf("Carta 2: %s: %.2f hab/km^2\n", nome2, denspopul2);
            if(denspopul1 < denspopul2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(denspopul1 == denspopul2){
            printf("Resultado: Empate!\n");
            } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;
        case 6:
        printf("\n Atributo: PIB per capita: \n");
        printf("Carta 1: %s: R$ %.2f\n", nome1, pibpercpt1);
        printf("Carta 2: %s: R$ %.2f\n", nome2, pibpercpt2);
            if(pibpercpt1 > pibpercpt2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(pibpercpt1 == pibpercpt2){
            printf("Resultado: Empate!\n");
            } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;
        case 7:
        printf("\n Atributo: Superpoder: \n");
        printf("Carta 1: %s: %.2f\n", nome1, superpoder1);
        printf("Carta 2: %s: %.2f\n", nome2, superpoder2);
            if(superpoder1 > superpoder2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if(superpoder1 == superpoder2){
            printf("Resultado: Empate!\n");
            } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            }
            break;
    default:
        printf("Número do Atributo Inválido!\n");
        break;
    }

    printf("Obrigado por jogar!\n");
    printf("Deseja jogar novamente? (1 - Sim, 0 - Não)\n");
    int jogar_novamente;
    scanf("%d", &jogar_novamente);
    if (jogar_novamente == 1) {
        printf("Reiniciando o jogo...\n");
        main(); // Reinicia o jogo chamando a função main novamente
    } else {
        printf("Saindo do jogo...\n");
    }

    return 0;
}
