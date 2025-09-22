#include <stdio.h>

int main() {
   
    int topicos;
    int comparacao;
    int cidades;

    int pontoscartaA = 50;
    int pontoscartaB = 60;

    int populacaocartaA = 300000;
    int populacaocartaB = 500000;

    float areacartaA = 5.000000;
    float areacartaB = 3.900000;

    float pibcartaA = 5.0000000;
    float pibcartaB = 3.9000000;

    char estadocartaA [50] = "Rio";
    char estadocartaB [50] = "Bahia";

    char cidadecartaA [60] = "Rio de Janeiro";
    char cidadecartaB [60] = "Bahia";

    char codigocartaA [30] = "R01";
    char codigocartaB [30] = "B01";

    float densidadecartaA, densidadecartaB;
    float pibcapitacartaA, pibcapitacartaB;
    
    printf("***Comparação da Carta A e Carta B***\n");

    printf("1.Comparação.\n");
    printf("2.Verificar nome das cidades.\n");
    scanf("%d", &comparacao, &cidades);

    switch (comparacao)
    {
    case 1:
    
    printf("Escolha um desses tópicos para comparar.\n");
    printf("1. Comparar pontos turísticos.\n");
    printf("2. Compararar área.\n");
    printf("3. Comparar população.\n");
    printf("4. Comparar PIB.\n");
    printf("5. Comparar densidade populacional.\n");
    printf("6. Comparar PIB per capita.\n");
    scanf("%d", &topicos);

    {
    if(pontoscartaA > pontoscartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");
    }
    else if (pontoscartaA < pontoscartaB)
    {
        printf("Carta B (Bahia) venceu!\n");
    }
    else{
        printf("Empate!\n");
    } break;
    }

    case 2:
    {
    if(areacartaA > areacartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");
    }
    else if(areacartaA < areacartaB){
        printf("Carta B (Bahia) venceu!\n");
    }
    else{
        printf("Empate!\n");
    } break;
    
    }

    case 3:
    {
    if(populacaocartaA > populacaocartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");
    }
    else if(populacaocartaA < pontoscartaB){
        printf("Carta B (Bahia) venceu!\n");
    }
    else{
        printf("Empate!\n");
    } break;
    
    }

    case 4:
    {
    if(pibcartaA > pibcartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");
    }
    else if(pibcartaA < pibcartaB){
        printf("Carta B (Bahia) venceu!\n");
    }
    else{
        printf("Empate!\n");
    } break;

    }

    case 5:
    {
    if(densidadecartaA < densidadecartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n", (populacaocartaA / areacartaA));
    }
    else if(densidadecartaA > densidadecartaB){
        printf("Carta B (Bahia) venceu!\n", (densidadecartaB / areacartaB));
    }
    else{
        printf("Empate!\n");
    }    break;

    }

    case 6:
    {
    if(pibcapitacartaA > pibcapitacartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n", (pibcartaA / populacaocartaA));
    }
    else if(pibcapitacartaA < pibcapitacartaB)
    {
    printf("Carta B (Bahia) venceu!\n", (pibcartaB / populacaocartaB));    
    }
    else{
        printf("Empate!\n");
    }       break;

    }

    default:
        printf("Opção inválida.\n");
    break;

}

switch (cidades)
{
case 1:
    printf("Cidade A - Rio de Janeiro\n", cidadecartaA);
break;

case 2:
    printf("Cidade A - Bahia\n", cidadecartaB);
break;

default:
    printf("Opção inválida!\n");
break;
}
return 0;

    //densidadecartaA = populacaocartaA / areacartaA;
    //densidadecartaB = populacaocartaB / areacartaB;

    //pibcapitacartaA = populacaocartaA / pibcartaA;
    //pibcapitacartaB = populacaocartaB / pibcartaB;


}