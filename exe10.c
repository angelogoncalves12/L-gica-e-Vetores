#include <stdio.h>

int main (){
    float vendas [7];
    int i, diaMaior = 0;
    float maior;

    for (i=1; i<=7; i++){
        printf ("Insira o valor da venda: ");
        scanf ("%f", &vendas[i]);

        if (vendas[i] > maior) {
         maior = vendas[i];
         diaMaior = i;
        }
    }
    printf ("Maior renda = %.2f no dia %d\n", maior, diaMaior);
    return 0;
}