#include <stdio.h>

int main() {
   
    int cartaA, cartaB;

    int pontoscartaA = 70;
    int pontoscartaB = 80;

    int populacaocartaA = 300000;
    int populacaocartaB = 50000;

    float areacartaA = 5.000000;
    float areacartaB = 3.900000;

    float pibcartaA = 5.0000000;
    float pibcartaB = 4.9000000;

    char estadocartaA [10] = "R";
    char estadocartaB [10] = "B";

    char cidadecartaA [20] = "Rio de Janeiro";
    char cidadecartaB [20] = "Bahia";

    char codigocartaA [20] = "R01";
    char codigocartaB [20] = "B01";

    float densidadecartaA, densidadecartaB;
    float pibcapitacartaA, pibcapitacartaB;
    
    float somaA, somaB;

    printf("***CartaA e CartaB***\n");

    printf("Digite o Estado da cartaA: %s\n", estadocartaA);
    printf("Digite o Estado da cartaB: %s\n", estadocartaB);

    printf("Digite a cidade da cartaA: %s\n", cidadecartaA);
    printf("Digite a cidade da cartaB: %s\n", cidadecartaB);

    printf("Digite o código da cartaA: %s\n", codigocartaA);
    printf("Digite o código da cartaB: %s\n", codigocartaB);

    printf("***Comparação da Carta A e Carta B***\n");

    printf("Digite quantos pontos turísticos tem a cartaA: %d\n", pontoscartaA);
    printf("Digite quantos pontos turísticos tem a cartaB: %d\n", pontoscartaB);

    if(pontoscartaA > pontoscartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");
    
    }else{
        printf("Carta B (Bahia) venceu!\n");

    }
    
    printf("Digite o número da população da cartaA: %d mil\n", populacaocartaA);
    printf("Digite o número da população da cartaB: %d mil\n", populacaocartaB);
     
    if(populacaocartaA > populacaocartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    printf("Digite quanto tem de área em km² a cartaA: %f milhões\n", areacartaA);
    printf("Digite quanto tem de área em km² a cartaB: %f milhões\n", areacartaB);

    if(areacartaA > areacartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    printf("Digite o número do PIB da cartaA: %f milhões\n", pibcartaA);
    printf("Digite o número do PIB da cartaB: %f milhões\n", pibcartaB);
    
    if(pibcartaA > pibcartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    densidadecartaA = populacaocartaA / areacartaA;
    densidadecartaB = populacaocartaB / areacartaB;

    pibcapitacartaA = populacaocartaA / pibcartaA;
    pibcapitacartaB = populacaocartaB / pibcartaB;

    printf("Densidade populacional da cartaA é: %.2f hab/km²\n", densidadecartaA);
    printf("Densidade populacional da cartaB é: %.2f hab/km²\n", densidadecartaB);

    if(densidadecartaA < densidadecartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }

    printf("PIB per capita: %.2f reais\n", pibcapitacartaA);
    printf("PIB per capita: %.2f reais\n", pibcapitacartaB);

    if(pibcapitacartaA > pibcapitacartaB){
        printf("Carta A (Rio de Janeiro) venceu!\n");

    }else{
        printf("Carta B (Bahia) venceu!\n");

    }
    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
