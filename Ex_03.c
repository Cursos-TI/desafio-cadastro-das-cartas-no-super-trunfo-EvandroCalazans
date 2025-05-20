#include <stdio.h>

int main() {

    // Criação das variáveis
    char nome[50];
    int matricula, idade; 
    float altura;
    
    // Chamadas e entradas das variáveis
    printf("Digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite sua matricula: ");
    scanf("%i", &matricula);
    printf("Digite a idade: ");
    scanf("%i", &idade);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("\n");

    // Saída dos dados
    printf("=================\n");
    printf("\n");
    printf("Nome: %s", nome);
    printf("Matricula: %i\n", matricula);
    printf("Idade: %i\n", idade);
    printf("Altura: %.2f\n", altura);
     
    printf("\n");


    return 0;
}