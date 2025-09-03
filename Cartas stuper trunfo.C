#include <stdio.h>

int main(){
    int populacao;  /*Variavel inteira para definir o numero da populaçao e pontos turisticos da cidade*/
    int turismo;    
    char estado[27]; /*variavel string para usuario entrar com nome do estado, codigo o e cidade*/
    char codigo[2];
    char cidade[30];
    float area;       /*Variavel real para definir o tamanho e pib da cidade*/
    float pib;

    printf("Escolha o estado da primeira carta \n"); /*Mensagem de interaçao com o usuario*/
    scanf("%s", estado);               /*Entrada da informaçao do usuario*/
    printf("O estado escolhido foi: %s\n", estado);    /*Retorno visual confirmando a resposta do usuario*/
 
    printf("Digite uma letra e um número de sua escolha para representar o código da carta: \n");
    scanf("%s", codigo);
    printf("O código é: %s\n", codigo);

    printf("Qual a cidade? \n");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);

    printf("Qual a população? \n");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    printf("Qual a Área em km² dessa cidade? \n");
    scanf("%f", &area);
    printf("A Área é: %f\n", area);

    printf("Qual o PIB da cidade? \n");
    scanf("%f", &pib);
    printf("O PIB é: %f m²\n", pib);

    printf("Quantos pontos turísticos a cidade tem? \n");
    scanf("%d", &turismo);
    printf("%d pontos turísticos \n", turismo);


    return 0;
}