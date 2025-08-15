#include <stdio.h>

int main() {

    // Inicialização das variáveis da primeira carta

    char estado1[15] = "BAHIA";
    char codigodacarta1[5] = "A01";
    char nomedacidade1[15] = "Salvador";
    float populacao1 = 14873161;
    float area1 = 567295;
    float pib1 = 352617;
    int pontosturisticos1 = 12;

    printf("Desafio Super Trunfo Nível Novato \n");
    
    printf("\nCadastro Básico: \n");

    // Entrada dos dados da primeira carta

    printf("\nCarta 1: \n");
    printf("Código da carta: %s\n", codigodacarta1);
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %2.f\n", populacao1);
    printf("Área: %2.f km² \n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

   
   // Inicialização das variáveis da segunda carta

    int carta2 = 2;
    char estado2[20] = "PARANÁ";
    char codigodacarta2[5] = "A02";
    char nomedacidade2[30] = "Curitiba";
    float populacao2 = 11824665;
    float area2 = 199315;
    float pib2 = 614610;
    int pontosturisticos2 = 10;

    // Entrada dos dados da segunda carta

    printf("\nCarta 2: \n");
    printf("Código da carta: %s\n", codigodacarta2);
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %2.f\n", populacao2);
    printf("Área: %2.f km² \n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}