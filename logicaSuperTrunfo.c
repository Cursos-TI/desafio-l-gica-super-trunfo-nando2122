#include <stdio.h>

int main() {
   
    int cartaA, cartaB;

    int pontoscartaA;
    int pontoscartaB;

    int populacaocartaA;
    int populacaocartaB;

    float areacartaA;
    float areacartaB;

    float pibcartaA;
    float pibcartaB;

    char estadocartaA [50];
    char estadocartaB [50];

    char cidadecartaA [60];
    char cidadecartaB [60];

    char codigocartaA [30];
    char codigocartaB [30];

    float densidadecartaA, densidadecartaB;
    float pibcapitacartaA, pibcapitacartaB;
    
    float somaA, somaB;

    printf("***CartaA e CartaB***\n");

    printf("Digite o Estado da carta A: \n");
    printf("Digite o Estado da carta B: \n");

    printf("Digite a cidade da carta A: \n");
    printf("Digite a cidade da carta B: \n");

    printf("Digite o código da carta A: \n");
    printf("Digite o código da carta B: \n");

    printf("***Comparação da Carta A e Carta B***\n");

    printf("Digite quantos pontos turísticos tem a cartaA: \n");
    scanf("%d", &pontoscartaA);
    printf("Digite quantos pontos turísticos tem a cartaB: \n");
    scanf("%d", &pontoscartaB);

    if(pontoscartaA > pontoscartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");
    
    }else{
        printf("Carta B (Bahia) venceu!\n");

    }
    
    printf("Digite o número da população da carta A: \n");
    scanf("%d", &populacaocartaA);
    printf("Digite o número da população da carta B: \n");
    scanf("%d", &populacaocartaB);
     
    if(populacaocartaA > populacaocartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    printf("Digite quanto tem de área em km² a carta A: \n");
    scanf("%f", &areacartaA);
    printf("Digite quanto tem de área em km² a carta B: \n");
    scanf("%f", &areacartaB);

    if(areacartaA > areacartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    printf("Digite o número do PIB da carta A: \n");
    scanf("%f", &pibcartaA);
    printf("Digite o número do PIB da carta B: \n");
    scanf("%f", &pibcartaB);
    
    if(pibcartaA > pibcartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    //densidadecartaA = populacaocartaA / areacartaA;
    //densidadecartaB = populacaocartaB / areacartaB;

    //pibcapitacartaA = populacaocartaA / pibcartaA;
    //pibcapitacartaB = populacaocartaB / pibcartaB;

    printf("Densidade populacional da carta A é: %.2f hab/km²\n", (populacaocartaA / areacartaA));
    printf("Densidade populacional da carta B é: %.2f hab/km²\n", (populacaocartaB / areacartaB));

    if(densidadecartaA > densidadecartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    printf("PIB per capita da carta A: %.2f reais\n", (populacaocartaA / pibcartaA));
    printf("PIB per capita da carta B: %.2f reais\n", (populacaocartaB / pibcartaB));

    if(pibcapitacartaA > pibcapitacartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }


return 0;

}