#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){

    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo, Rio, Amazonas;
    
    int pontosturisticosA, pontosturisticosB;
    int populacaoA, populacaoB;

    float areacartaA, areacartaB;
    float pibcartaA, pibcartaB;
    //float densidadecartaA, densidadecartaB;
    //float pibcapitaA, pibcapitaB;
    //Densidade populacional = (populacao/ area) quem obtiver menos ganha
    //PIB per capita = (populacao / pib) que obtiver mais ganha

    srand(time(0));
    pontosturisticosA = 1;//rand() % 100 + 1;
    pontosturisticosB = 0;//rand() % 100 + 1;
    populacaoA = 1;//rand() % 100 + 1;
    populacaoB = 0;//rand() % 100 + 1;
    areacartaA = 0;//rand() % 100 + 1;
    areacartaB = 1;//rand() % 100 + 1;

    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo!\n");
    printf("P. Pontos turísticos\n");
    printf("U. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("C. Cidades\n");
    //printf("D. Densidade demográfica\n");
    //printf("B. PIB per capita\n");
    
    printf("Escolha a comparação: \n");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
    case 'P':
    case 'p':
        printf("Você escolheu Pontos Turísticos!\n");
        resultado1 = pontosturisticosA > pontosturisticosB ? 1 : 0;
        break;

    case 'U':
    case 'u':
        printf("Você escolheu População!\n");
        resultado1 = populacaoA > populacaoB ? 1 : 0;
        break;

    case 'A':
    case 'a':
        printf("Você escolheu Área!\n");
        resultado1 = areacartaA > areacartaB ? 1 : 0;
        break;

    case 'I':
    case 'i':
        printf("Você escolheu PIB!\n");
        resultado1 = pibcartaA > pibcartaB ? 1 : 0;
        break;

    case 'C':
    case 'c':
        printf("Você escolheu Cidades: %d\n", Rio, Amazonas);
        break;

    //case 'D':
    //case 'd':
      //  break;

    //case 'B':
    //case 'b':
      //  break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo!\n");
    printf("Atenção!!! Escolha um novo atributo.\n");
    printf("P. Pontos turísticos\n");
    printf("U. População\n");
    printf("A. Área\n");
    printf("I. PIB\n");
    printf("C. Cidades\n");
    //printf("D. Densidade demográfica\n");
    //printf("B. PIB per capita\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo)
    {
    printf("Os atributos são os mesmos.\n");
    }
    else{
        switch (segundoAtributo)
        {
        case 'P':
        case 'p':
        printf("Você escolheu Pontos Turísticos!\n");
        resultado2 = pontosturisticosA > pontosturisticosB ? 1 : 0;
        break;

        case 'U':
        case 'u':
        printf("Você escolheu População!\n");
        resultado2 = populacaoA > populacaoB ? 1 : 0;
        break;

        case 'A':
        case 'a':
        printf("Você escolheu Área!\n");
        resultado2 = areacartaA > areacartaB ? 1 : 0;
        break;

        case 'I':
        case 'i':
        printf("Você escolheu PIB!\n");
        resultado2 = pibcartaA > pibcartaB ? 1 : 0;
        break;

        case 'C':
        case 'c':
        printf("Você escolheu Cidades: %d\n", Rio, Amazonas);
        break;

        //case 'D':
        //case 'd':
        //  break;

        //case 'B':
        //case 'b':
        //  break;

        default:
        printf("Opção inválida!\n");
        break;
        }

        if (resultado1 && resultado2)//se for verdadeiro, ele vence
        {
        printf("Parabéns, você ganhou!\n");
        }
        else if(resultado1 != resultado2){
        printf("Empate!\n");
        }
        else{
        printf("Infelizmente você perdeu!\n");
        }
    }
}