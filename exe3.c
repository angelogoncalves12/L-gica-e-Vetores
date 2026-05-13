#include <stdio.h>
int main (){
    int numeros[10];
    int pos, maior = 0;

    for (pos=1; pos<=10; pos++){
        printf ("Digite o número da posição %d: ", pos);
        scanf ("%d", &numeros[pos]);

        if (numeros > maior){
            maior = numeros; 
        }
    }
    printf ("O maior número digitado: %d\n", maior);
    return 0;
}