#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char Estado1 [20];
    char Codigo1 [4];  
    char Nome1 [20];
    int Populacao1;
    float Pib1;
    int PontosTuristicos1;
    float Area1;
    
   /*--------------------------------------*/
    char Estado2 [20];
    char Codigo3 [4];  
    char Nome3 [20];
    int Populacao3;
    float Pib3;
    int PontosTuristicos3;
    float Area3;

    
    // Cadastro das Cartas:
    
   printf("Digite o estado das cartas (Ex:A,B,C):\n");
   scanf("%s", Estado1);
   printf("Digite o código da cidade (Ex:A01,A02):\n");
   scanf("%s", Codigo1);
   printf("Digite o nome da cidade: \n");
   scanf(" %[^\n]", Nome1);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao1);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib1);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos1);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area1);
     
   printf("\n----------------------------------\n"); /*Para melhor organização*/

   printf("Digite outro estado:\n"); /*Estado 2*/
   scanf("%s", Estado2);
   printf("Digite o código da cidade: \n");
   scanf("%s", Codigo3);
   printf("Digite o nome da cidade: \n");
   scanf(" %[^\n]", Nome3);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao3);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib3);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos3);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area3);
   printf("\n----------------------------------\n"); /*Para melhor organização*/


    // Comparação de Cartas:
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
printf("Escolha uma das opções:\n");
printf("1-Comparação de população\n");
printf("2-Comparação de PIB\n");
printf("3-Comparação de Pontos Turisticos\n");
printf("4-Comparação de Area\n");
printf("5-Comparação de Densidade\n");

    switch (Opçoes){
    case 1:
    if (Populacao1>Populacao3){
    printf("Carta 1 venceu!\n");
    }else if (Populacao1<Populacao3){
    printf("Carta 2 venceu!\n");
        /* code */
    }
    

    break;

default:
    break;
}
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
