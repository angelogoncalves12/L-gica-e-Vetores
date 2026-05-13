#include <stdio.h>
int main (){
    int numeros[10];
    int pos, valor, encontrado = 0; 

    for (pos=1; pos<=10; pos++){
        printf ("Insira os valores [%d]: ", pos);
        scanf ("%d", &numeros[pos]);
    }
    printf ("Digite um valor a ser encontrado: ");
    scanf ("%d", &valor);

    if (valor = numeros [pos]) {
        encontrado ++;
    }
    if (encontrado) {
        printf ("Valor encontrado!\n");
    }
    else {
        printf ("Valor não encontrado!\n");
    }

    return 0;
}