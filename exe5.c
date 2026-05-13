#include <stdio.h>
int main (){
    float numeros[6];
    int pos;
    float soma = 0, media = 0;

    for (pos=1; pos<=6; pos++){
        printf ("Digite o número para cálculo da média [%d]: ", pos);
        scanf ("%f", &numeros[pos]);

    soma = soma + numeros[pos];
    }
    media = soma/6;
    printf ("A média entre os números digitados foi: %.2f\n", media);
    return 0;
}