#include <stdio.h>

int main () {
    //Por algum motivo desconhecido, ta bugado

char estado1;
char estado2;
char codigo1[20];
char codigo2[20];
char nomeCidade1[50];
char nomeCidade2[50];
int pop1, pontosTuristicos1, pop2, pontosTuristicos2;
float area1, pib1, area2, pib2;

    // Solicitando ao usuário informações para cadastrar a primeira carta
    printf("Olá, vamos cadastrar as informações da primeira carta\n");
    
    printf("\nPor favor, digite uma letra para o estado de 'A' a 'H'\n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 - ex: A01, B03\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade sem digitar o 'espaço' - ex: RioDeJaneiro, BeloHorizonte\n");
    scanf("%s", nomeCidade1);

    printf("Digite o número de habitantes\n");
    scanf("%d", &pop1);

    printf("Digite a área da cidade em quilometros quadrados utilizando ponto para as casas decimais - ex: 730.2\n");
    scanf("%f", &area1);

    printf("Digite o Produto Interno Bruto da cidade\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontosTuristicos1);

    // Mostrando os dados da primeira carta cadastrada
    printf("\nCarta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", pop1);
    printf("Área: %.1f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos1);

    //Solicitando ao usuário os dados da segunda carta
    printf("\nAgora, vamos cadastrar as informações da segunda carta\n");
    
    printf("\nPor favor, digite uma letra para o estado de 'A' a 'H' \n");
    scanf("%c", &estado2);
    
    printf("Digite a letra do estado seguida de um número de 01 a 04 - ex: A01, B03\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade sem digitar o 'espaço' - ex: RioDeJaneiro, BeloHorizonte\n");
    scanf("%s", nomeCidade2);

    printf("Digite o número de habitantes\n");
    scanf("%d", &pop2);

    printf("Digite a área da cidade em quilometros quadrados utilizando ponto para as casas decimais - ex: 730.2\n");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos\n");
    scanf("%d", &pontosTuristicos2);

    // Mostrando os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", pop2);
    printf("Área: %.1f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosTuristicos2);

    return 0;
}