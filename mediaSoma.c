#include <stdio.h>

int main(int argc, char const *argv[])
{
    float num_1, num_2, num_3, media = 0, soma =0;

    printf("Digite o primeiro numero: "); 
    scanf("%f", &num_1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num_2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num_3);

    media = (num_1 + num_2 + num_3) / 3;
    soma = num_1 + num_2 + num_3;

    int opcao = 0;

    printf("***MENU***\n");
    printf("Digite 1 para calcular a soma\n");
    printf("Digite 2 para calcular a media\n");
    printf("Digite 3 para calcular a media e a soma\n");
    printf("Digite 4 para sair\n");
    printf("Digite a opcao desejada: ");    
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        printf("A soma dos numeros eh: %.2f\n", soma);
        break;
    case 2:
        printf("A media dos numeros eh: %.2f\n", media);
        break;
    case 3:
        printf("A soma dos numeros eh: %.2f\n", soma);
        printf("A media dos numeros eh: %.2f\n", media);
        break; 
    case 4:
        printf("Saindo do programa...\n");
        break;
    
    default:
        break;
    }





    return 0;
}
