#include <stdio.h>

int main()
{
    int towerMovement = 5, bishopMovement = 5, queenMovement = 8;
    int towerIndex = 0, bishopIndex = 0, queenIndex = 0;

    printf("Movimentos da torre: ");

    printf("\n");
    printf("\n");

    do
    {
        printf("Direita\n");

        towerIndex++;
    } while (towerIndex < towerMovement);

    printf("\n");
    printf("\n");

    printf("Movimentos do bispo: ");

    printf("\n");
    printf("\n");

    do
    {
        printf("Cima, Direita\n");

        bishopIndex++;
    } while (bishopIndex < bishopMovement);

    printf("\n");
    printf("\n");

    printf("Movimentos da rainha: ");

    printf("\n");
    printf("\n");

    do
    {
        printf("Esquerda\n");

        queenIndex++;
    } while (queenIndex < queenMovement);

    return 0;
}
