#include <stdio.h>
int main (){
    int numeros[12];
    int pos, pares = 0; 

    for (pos=1; pos<=12; pos++){
        printf ("Digite o número para cálculo da média [%d]: ", pos);
        scanf ("%d", &numeros[pos]);

        if (numeros[pos] % 2 == 0) {
            printf ("Esse número é par!\n");
            pares ++;
        }
    }
    
    printf ("A quantidade de números pares digitados foi: %d\n", pares);
    return 0;
}