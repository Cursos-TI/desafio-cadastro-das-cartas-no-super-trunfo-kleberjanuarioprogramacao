#include    <stdio.h>

int main (){
    
    //Variaveis da primeira carta
    char estado;
    char codigoDc[4];
    char nome[20];
    int populacao, Pturisticos;
    float area , pib;
  
    //Variaveis da segunda carta
    char estado2;
    char codigoDc2[4];
    char nome2[20];
    int populacao2, Pturisticos2;
    float area2 , pib2;

    //códigos para a primeira carta
    
    printf("Digite o código de sua carta (ex: A01,B02..): \n");
    scanf("%s", codigoDc);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a área (km²): \n");
    scanf("%f", &area);
    printf("Pib (Bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Pontos turísticos: \n");
    scanf("%d", &Pturisticos);

    //códigos para a segunda carta
  
    printf("Digite o código de sua carta (ex: A01,B02..): \n");
    scanf("%s", codigoDc2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Pib (Bilhões de reais):\n ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &Pturisticos2);

     printf("\n");

     return 0;

     
}