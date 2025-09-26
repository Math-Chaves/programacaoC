#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[50];
    int pop1, pop2;
    int pointTuris1, pointTuris2;
    float area1, area2;
    float pib1, pib2;
    float densidadePop1, densidadePop2;
    float pibPerCapita1, pibPerCapita2;

    printf("*** Cadastramento de Cartas ***\n");

    //Solicitando ao usuário informações da primeira carta
    printf("\nOlá, vamos cadastrar as informações da primeira carta\n");

    printf("\nDigite uma letra para o estado de A a H\n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 - ex: A01\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade sem espaço - ex: RioDeJaneiro\n");
    scanf("%s", nomeCidade1);

    printf("Digite o número de habitantes\n");
    scanf("%d", &pop1);

    printf("Digite a área da cidade em Km quadrados utilizando ponto para casas decimais\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pointTuris1);

    //Calculando a Densidade Populacional e o Pib per Capita
    densidadePop1 = (float) pop1 / area1;
    pibPerCapita1 = (float) pib1 / pop1;

    //Imprimindo as informações cadastradas da primeira carta
    printf("\n** Carta1: **\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.1f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pointTuris1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePop1);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita1);
    printf("** Carta cadastrada com sucesso! **\n");

    //Cadastrando segunda carta
    printf("\nAgora, vamos cadastrar as informações da próxima carta\n");

    //Não sei por que o programa está pulando esse scanf
    printf("\nDigite uma letra para o estado de A a H\n");
    scanf("%c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 - ex: A01\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade sem espaço - ex: RioDeJaneiro\n");
    scanf("%s", nomeCidade2);

    printf("Digite o número de habitantes\n");
    scanf("%d", &pop2);

    printf("Digite a área da cidade em Km quadrados utilizando ponto para casas decimais\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pointTuris2);

    //Calculando a Densidade Populacional e o Pib per Capita
    densidadePop2 = (float) pop2 / area2;
    pibPerCapita2 = (float) pib2 / pop2;

    //Imprimindo as informações cadastradas da segunda carta
    printf("\n** Carta1: **\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.1f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pointTuris2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidadePop2);
    printf("PIB per Capita: R$%.2f\n", pibPerCapita2);
    printf("** Carta cadastrada com sucesso! **\n");

    return 0;
}