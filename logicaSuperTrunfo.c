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
    float Densidade1;
    int Opcoes;
   /*--------------------------------------*/
    char Estado2 [20];
    char Codigo2 [4];  
    char Nome2 [20];
    int Populacao2;
    float Pib2;
    int PontosTuristicos2;
    float Area2;
    float Densidade2;

    
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
   printf("Digite a densidade (hab/km²): \n");
   scanf("%f", &Densidade1);
     
   printf("\n----------------------------------\n"); /*Para melhor organização*/

   printf("Digite outro estado:\n"); /*Estado 2*/
   scanf("%s", Estado2);
   printf("Digite o código da cidade: \n");
   scanf("%s", Codigo2);
   printf("Digite o nome da cidade: \n");
   scanf(" %[^\n]", Nome2);
   printf("Digite o número da populaçao: \n");
   scanf("%d", &Populacao2);
   printf("Digite o Pib: \n");
   scanf("%f", &Pib2);
   printf("Digite o número de pontos turísticos: \n");
   scanf("%d", &PontosTuristicos2);
   printf("Digite a área (em km²): \n");
   scanf("%f", &Area2);
   printf("Digite a densidade (hab/km²): \n");
   scanf("%f", &Densidade2);

   
    printf("\n----------------------------------\n"); /*Para melhor organização*/
    printf("Cartas de cidades do Estado %s\n",Estado1);
    printf("\n");/*Para melhor organização*/

    printf("Código da cidade: %s\n",Codigo1);
    printf("Nome da cidade: %s\n", Nome1);
    printf("Número da população: %d\n", Populacao1);
    printf("Pib da cidade: %f\n",Pib1);
    printf("Número de pontos turisticos: %d\n",PontosTuristicos1);
    printf("Área da cidade: %f\n",Area1);
    printf("A densidade demográfica da cidade:%f\n", Densidade1);

    printf("\n----------------------------------\n"); /*Para melhor organização*/
    printf("Cartas de cidades do Estado %s\n",Estado2);
    printf("\n");/*Para melhor organização*/

    printf("Código da cidade: %s\n",Codigo2);
    printf("Nome da cidade: %s\n", Nome2);
    printf("Número da população: %d\n", Populacao2);
    printf("Pib da cidade: %f\n",Pib2);
    printf("Número de pontos turisticos: %d\n",PontosTuristicos2);
    printf("Área da cidade: %f\n",Area2);
    printf("A densidade demográfica da cidade:%f\n", Densidade2);


    printf("\n----------------------------------\n"); /*Para melhor organização*/
     
    // Comparação de Cartas:
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("Escolha o atributo de compração:\n");
    printf("1-Comparação de população\n");
    printf("2-Comparação de PIB\n");
    printf("3-Comparação de Pontos Turisticos\n");
    printf("4-Comparação de Area\n");
    printf("5-Comparação de Densidade\n");
    scanf("%d", &Opcoes);

    switch (Opcoes){
    case 1:
    if (Populacao1>Populacao2){
    printf("A cidade %s tem maior população!\n", Nome1);
    }else if (Populacao1<Populacao2){
    printf("A cidade %s tem maior população!\n", Nome2);
    }else{
    printf("Ambas as cidades tem o mesmo número de população!\n");
    }
    break;
    case 2:
    if (Pib1>Pib2){
        printf("A cidade %s tem maior PIB!\n",Nome1);
        }else if (Pib1<Pib2){
        printf("A cidade %s tem maior PIB\n",Nome2);
        }else{
        printf("Ambas as cidades tem o mesmo PIB!\n");
        }
    break;
    case 3:
    if (PontosTuristicos1>PontosTuristicos2){
        printf("A cidade %s tem mais pontos turísticos!\n",Nome1);
        }else if (PontosTuristicos1<PontosTuristicos2){
        printf("A cidade %s tem mais pontos turísticos!\n",Nome2);
        }else{
        printf("Ambas as cidades tem o mesmo número de pontos turísticos!\n");
        }
    break;    
    case 4:
    if (Area1>Area2){
        printf("A cidade %s tem a área maior!\n",Nome1);
        }else if (Area1<Area2){
        printf("A cidade %s tem a área maior!\n",Nome2);
        }else{
        printf("Ambas as cidades tem o mesmo número de área!\n");
        }
    break;
    case 5:
    if (Densidade1<Densidade2){
        printf("A cidade %s é a vencedora! Tem menor densidade\n",Nome1);
        }else if (Densidade1>Densidade2){
        printf("A cidade %s é a vencedora! Tem menor densidade!\n",Nome2);
        }else{
        printf("Ambas cidades tem a mesma densidade\n");
        }    
    break;    
default:
printf("Opção inválida!\n");
    break;
}    
   
    return 0;    
}

