#include <stdio.h>
int main (){
    int numeros[8];
    int pos, soma = 0;

    for (pos=1; pos<=8; pos++){
        printf ("Digite o número para soma: ", pos);
        scanf ("%d", &numeros[pos]);
        soma = soma + numeros[pos]; 
    }
    printf ("A soma dos números digitados foi %d", soma);
    return 0;
}